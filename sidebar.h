#ifndef SIDEBAR_H
#define SIDEBAR_H

#include <QQuickWidget>

namespace Ui {
class sideBar;
}

class sideBar : public QQuickWidget
{
    Q_OBJECT

public:
    explicit sideBar(QQuickWidget *parent = 0);
    ~sideBar();

private:
    Ui::sideBar *ui;
};

#endif // SIDEBAR_H
