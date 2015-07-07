#include "./Model/toolbarmodel.h"

toolBarModel::toolBarModel(QObject *parent)
    : QObject(parent)
{


}

toolBarModel::toolBarModel(const QString &name, const QString &path)
{
    _Name = name;
    _IconPath = path;
}

toolBarModel::~toolBarModel()
{

}

QString toolBarModel::name()
{
    return _Name;
}

void toolBarModel::setName(const QString &value)
{
    _Name = value;
    emit nameChanged();
}

QString toolBarModel::iconPath()
{
    return _IconPath;
}

void toolBarModel::setIconPath(const QString &value)
{
    _IconPath = value;
    emit iconPahtChanged();
}

