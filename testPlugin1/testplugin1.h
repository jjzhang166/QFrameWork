#ifndef TESTPLUGIN1_H
#define TESTPLUGIN1_H

#include "testplugin1_global.h"
#include "../Interfaces/PluginInterFace.h"

#include <QObject>

class TESTPLUGIN1SHARED_EXPORT TestPlugin1:public QObject,PluginInterFace
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "{6A5B6FCE-94D2-40CB-824C-34EEA2FA7367}" FILE "testplugin1.json")
    Q_INTERFACES(PluginInterFace)

public:
    QString name() const;
    QString iconPath() const;
    QWidget *widget() const;
};

#endif // TESTPLUGIN1_H
