#include "form.h"
#include "ui_form.h"
#include <QMessageBox>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    QMessageBox::warning(this,tr("Hello"),tr("测试插件"));
}
