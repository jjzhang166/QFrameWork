#include "sidebar.h"
#include "ui_sidebar.h"
#include "mainqmlcon.h"
#include "toolbarmodel.h"

#include <QDebug>
#include <QPalette>
#include <QQmlContext>

sideBar::sideBar(QQuickWidget *parent) :
    QQuickWidget(parent),
    ui(new Ui::sideBar)
{
    ui->setupUi(this);

    mainQmlCon con;
    con.setSiderBarHeight(this->height());
    con.setSiderBarWidth(this->width());

    QList<QObject *> dataList;
    dataList.append(new toolBarModel(tr("你好"),tr("img/1.png")));
    dataList.append(new toolBarModel(tr("你好1"),tr("img/2.png")));
    dataList.append(new toolBarModel(tr("你好"),tr("img/1.png")));
    dataList.append(new toolBarModel(tr("你好1"),tr("img/2.png")));
    dataList.append(new toolBarModel(tr("你好"),tr("img/1.png")));
    dataList.append(new toolBarModel(tr("你好1"),tr("img/2.png")));
    dataList.append(new toolBarModel(tr("你好"),tr("img/1.png")));
    dataList.append(new toolBarModel(tr("你好1"),tr("img/2.png")));

    this->rootContext()->setContextProperty("confi",&con);
    this->rootContext()->setContextProperty("toolBarModel",QVariant::fromValue(dataList));
    setSource(QUrl::fromLocalFile("uiData/qml/SideBar.qml"));

}

sideBar::~sideBar()
{
    delete ui;
}
