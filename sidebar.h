#ifndef SIDEBAR_H
#define SIDEBAR_H

#include <QWidget>
#include <QQuickWidget>
#include <QList>

namespace Ui {
class sideBar;
}

class sideBar : public QQuickWidget
{
    Q_OBJECT

public:
    explicit sideBar(QQuickWidget *parent = 0);
    ~sideBar();
    QList<QWidget *> getGetListWidget() const;
    void setGetListWidget(const QList<QWidget *> &value);
signals:
    void singalSideBarIndex(int );
private slots:
    void slotsSideBarIndex(QString );
private:
    Ui::sideBar *ui;
    QList<QWidget *> _ListWidget;
};

#endif // SIDEBAR_H
