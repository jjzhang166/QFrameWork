#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QString>
#include <QObject>

class PluginInterFace
{

public:
    virtual QString name() const=0;
    virtual QString iconPath() const=0;
    virtual QWidget *widget() const=0;
};

QT_BEGIN_NAMESPACE
    Q_DECLARE_INTERFACE(PluginInterFace, "{81AAD42E-1206-443A-8DA2-81C878C23E74}")
    QT_END_NAMESPACE

#endif
