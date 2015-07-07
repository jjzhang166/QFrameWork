#ifndef TOOLBARMODEL_H
#define TOOLBARMODEL_H

#include <QObject>



class toolBarModel : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString iconPath READ iconPath WRITE setIconPath NOTIFY iconPahtChanged)

public:
    explicit toolBarModel(QObject *parent = 0);
    toolBarModel(const QString &, const QString &);
    ~toolBarModel();

    QString name();
    void setName(const QString &);

    QString iconPath();
    void setIconPath(const QString &);

private:
    QString _Name;
    QString _IconPath;

signals:
    void nameChanged();
    void iconPahtChanged();
};

#endif // TOOLBARMODEL_H
