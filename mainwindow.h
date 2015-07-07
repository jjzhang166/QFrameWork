#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void slotsWidgetIndex(int );

private:
    Ui::MainWindow *ui;
    QStackedWidget *_stackedWidget;
};

#endif // MAINWINDOW_H
