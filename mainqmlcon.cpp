#include "mainqmlcon.h"

mainQmlCon::mainQmlCon()
{

}

mainQmlCon::~mainQmlCon()
{

}

int mainQmlCon::getSiderBarHeight()
{
    return _SiderBarHeight;
}

int mainQmlCon::getSiderBarWidth()
{
    return _SiderBarWidth;
}

void mainQmlCon::setSiderBarHeight(int value)
{
    _SiderBarHeight = value;
    emit sendSiderBarHeight();
}

void mainQmlCon::setSiderBarWidth(int value)
{
    _SiderBarWidth = value;
    emit sendSiderBarWidth();
}

