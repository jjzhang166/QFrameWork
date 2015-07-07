#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sidebar.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _stackedWidget = new QStackedWidget(this);
    ui->horizontalLayout->addWidget(_stackedWidget);
    sideBar *_sideBar = new sideBar();
    ui->horizontalLayout->addWidget(_sideBar);
    QList<QWidget *> _ListWidget = _sideBar->getGetListWidget();
    for(int i =0 ; i < _ListWidget.size(); i++){
        qDebug() << tr("Add Widget ObjectNameL:%1").arg(_ListWidget.at(i)->objectName());
        _stackedWidget->insertWidget(i,_ListWidget.at(i));
    }
    QObject::connect(_sideBar,SIGNAL(singalSideBarIndex(int )),this,SLOT(slotsWidgetIndex(int )));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotsWidgetIndex(int index)
{
    qDebug() << tr("SLOT slotsWidgetIndex:%1").arg(index);
    _stackedWidget->setCurrentIndex(index);
}
