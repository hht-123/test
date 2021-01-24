#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *test = new QPushButton("123", this);
}

Widget::~Widget()
{
    delete ui;
}
