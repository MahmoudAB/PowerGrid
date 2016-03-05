#ifndef NOWINDOW_H
#define NOWINDOW_H

#include <QDialog>

namespace Ui {
class NoWindow;
}

class NoWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NoWindow(QWidget *parent = 0);
    ~NoWindow();

private:
    Ui::NoWindow *ui;
};

#endif // NOWINDOW_H
