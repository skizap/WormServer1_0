#include "form.h"
#include "ui_form.h"
#include "QMessageBox"
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
    QMessageBox::information(this,"sadf","sadfa");
}
