#include "sidebar.h"
#include "ui_sidebar.h"
#include "./Model/mainqmlcon.h"
#include "./Model/toolbarmodel.h"
#include "./Interfaces/PluginInterFace.h"
#include "./Core/pluginmanager.h"
#include "mainwindow.h"

#include <QDebug>
#include <QPalette>
#include <QQmlContext>
#include <QQuickItem>

sideBar::sideBar(QQuickWidget *parent) :
    QQuickWidget(parent),
    ui(new Ui::sideBar)
{
    ui->setupUi(this);

    mainQmlCon con;
    con.setSiderBarHeight(this->height());
    con.setSiderBarWidth(this->width());

    QList<QObject *> dataList;
    PluginManager *manager = new PluginManager(this);
    QMap<QString, PluginInterFace*> map = manager->FindPlugin();
    QMap<QString, PluginInterFace*>::const_iterator i = map.constBegin();
    while (i != map.constEnd()) {
        dataList.append(new toolBarModel(i.key(),i.value()->iconPath()));
        //qDebug() << i.value()->widget()->objectName();
        _ListWidget.append(i.value()->widget());
        ++i;
    }

    this->rootContext()->setContextProperty("confi",&con);
    this->rootContext()->setContextProperty("toolBarModel",QVariant::fromValue(dataList));
    setSource(QUrl::fromLocalFile("uiData/qml/SideBar.qml"));
    QObject::connect(rootObject(),SIGNAL(sideBarIndex(QString )),this,SLOT(slotsSideBarIndex(QString )));

}

sideBar::~sideBar()
{
    delete ui;
}
QList<QWidget *> sideBar::getGetListWidget() const
{
    return _ListWidget;
}

void sideBar::setGetListWidget(const QList<QWidget *> &value)
{
    _ListWidget = value;
}

void sideBar::slotsSideBarIndex(QString index)
{
    qDebug() << tr("Widget Slost SideBar Index %1").arg(index);
    emit singalSideBarIndex(index.toInt());
}

