#include "testplugin.h"
#include "form.h"



QString TestPlugin::name() const
{
    return tr("测试1");
}

QString TestPlugin::iconPath() const
{
    return "img/1.png";
}

QWidget *TestPlugin::widget() const
{
    return new Form();
}
