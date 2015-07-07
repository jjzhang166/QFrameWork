/*-----------------------------------------------
 * 主框架QML设置类
 * 包括
 * 1、车边栏框架大小设置
 */

#ifndef MAINQMLCON_H
#define MAINQMLCON_H

#include <QObject>

class mainQmlCon: public QObject
{
    Q_OBJECT
    Q_PROPERTY(int siderBarHeight READ getSiderBarHeight WRITE setSiderBarHeight NOTIFY sendSiderBarHeight)
    Q_PROPERTY(int siderBarWidth READ getSiderBarWidth WRITE setSiderBarWidth NOTIFY sendSiderBarWidth)


public:
    mainQmlCon();
    ~mainQmlCon();

    int getSiderBarHeight();
    int getSiderBarWidth();

    void setSiderBarHeight(int );
    void setSiderBarWidth(int );

private:
    int _SiderBarHeight;
    int _SiderBarWidth;


signals:
    void sendSiderBarHeight();
    void sendSiderBarWidth();
};

#endif // MAINQMLCON_H
