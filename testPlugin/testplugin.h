#ifndef TESTPLUGIN_H
#define TESTPLUGIN_H

#include "testplugin_global.h"
#include "../Interfaces/PluginInterFace.h"

#include <QObject>
#include <QWidget>

class TESTPLUGINSHARED_EXPORT TestPlugin:public QObject,PluginInterFace
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "{6A5B6FCE-94D2-40CB-824C-34EEA2FA7367}" FILE "testplugin.json")
    Q_INTERFACES(PluginInterFace)

public:
     QString name() const;
     QString iconPath() const;
     QWidget *widget() const;
};

#endif // TESTPLUGIN_H
