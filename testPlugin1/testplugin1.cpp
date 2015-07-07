#include "testplugin1.h"
#include "form.h"



QString TestPlugin1::name() const
{
    return tr("测试2");
}

QString TestPlugin1::iconPath() const
{
    return "img/2.png";
}

QWidget *TestPlugin1::widget() const
{
    return new Form();
}
