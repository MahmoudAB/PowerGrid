#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Player.h"
#include "currentplayers.h"
#include <iostream>

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
    void endingTurns();
    void startGame();

private slots:
    void on_pushButton_clicked();



    void on_city1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_city2_clicked();

    void on_city3_clicked();

    void on_city4_clicked();

    void on_city5_clicked();

    void on_city6_clicked();

    void on_city7_clicked();

    void on_city8_clicked();

    void on_city9_clicked();

    void on_city10_clicked();

    void on_city11_clicked();

    void on_city12_clicked();

    void on_city13_clicked();

    void on_city14_clicked();

    void on_city15_clicked();

    void on_city16_clicked();

    void on_city17_clicked();

    void on_city18_clicked();

    void on_city19_clicked();

    void on_city20_clicked();

    void on_city21_clicked();

    void on_city22_clicked();

    void on_city23_clicked();

    void on_city24_clicked();

    void on_city25_clicked();

    void on_city26_clicked();

    void on_city27_clicked();

    void on_city28_clicked();

    void on_city29_clicked();

    void on_city30_clicked();

    void on_city31_clicked();

    void on_city32_clicked();

    void on_city33_clicked();

    void on_city34_clicked();

    void on_city35_clicked();

    void on_city36_clicked();

    void on_city37_clicked();

    void on_city38_clicked();

    void on_city39_clicked();

    void on_city40_clicked();

    void on_city41_clicked();

    void on_city42_clicked();

private:
    Player one;
    Player two;
};

#endif // MAINWINDOW_H
