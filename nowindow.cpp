#include "nowindow.h"
#include "ui_nowindow.h"

NoWindow::NoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NoWindow)
{
    ui->setupUi(this);
}

NoWindow::~NoWindow()
{
    delete ui;
}
