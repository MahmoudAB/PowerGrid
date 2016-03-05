#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Player.h"
#include "currentplayers.h"
#include "nowindow.h"
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setting all cities to invisible until game start button is clicked
    ui->city1->setVisible(false);
    ui->city2->setVisible(false);
    ui->city3->setVisible(false);
    ui->city4->setVisible(false);
    ui->city5->setVisible(false);
    ui->city6->setVisible(false);
    ui->city7->setVisible(false);
    ui->city8->setVisible(false);
    ui->city9->setVisible(false);
    ui->city10->setVisible(false);

    ui->city11->setVisible(false);
    ui->city12->setVisible(false);
    ui->city13->setVisible(false);
    ui->city14->setVisible(false);
    ui->city15->setVisible(false);
    ui->city16->setVisible(false);
    ui->city17->setVisible(false);
    ui->city18->setVisible(false);
    ui->city19->setVisible(false);

    ui->city20->setVisible(false);
    ui->city21->setVisible(false);
    ui->city22->setVisible(false);
    ui->city23->setVisible(false);
    ui->city24->setVisible(false);
    ui->city25->setVisible(false);
    ui->city26->setVisible(false);
    ui->city27->setVisible(false);
    ui->city28->setVisible(false);
    ui->city29->setVisible(false);

    ui->city30->setVisible(false);
    ui->city31->setVisible(false);
    ui->city32->setVisible(false);
    ui->city33->setVisible(false);
    ui->city34->setVisible(false);
    ui->city35->setVisible(false);
    ui->city36->setVisible(false);
    ui->city37->setVisible(false);
    ui->city38->setVisible(false);
    ui->city39->setVisible(false);

    ui->city40->setVisible(false);
    ui->city41->setVisible(false);
    ui->city42->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("group F");
}

void MainWindow::startGame(){
    one.setTurn();
}

//method that calls method from player class to end turn
void MainWindow::endingTurns(){
    one.turn();
    two.turn();
}

//button to end turn
void MainWindow::on_pushButton_2_clicked()
{

        endingTurns(); //end turn button

}
//button to start game
void MainWindow::on_pushButton_3_clicked()
{
    startGame(); //button that starts the game
    ui->city1->setVisible(true); //setting all cities visible
    ui->city2->setVisible(true);
    ui->city3->setVisible(true);
    ui->city4->setVisible(true);
    ui->city5->setVisible(true);
    ui->city6->setVisible(true);
    ui->city7->setVisible(true);
    ui->city8->setVisible(true);
    ui->city9->setVisible(true);
    ui->city10->setVisible(true);

    ui->city11->setVisible(true);
    ui->city12->setVisible(true);
    ui->city13->setVisible(true);
    ui->city14->setVisible(true);
    ui->city15->setVisible(true);
    ui->city16->setVisible(true);
    ui->city17->setVisible(true);
    ui->city18->setVisible(true);
    ui->city19->setVisible(true);

    ui->city20->setVisible(true);
    ui->city21->setVisible(true);
    ui->city22->setVisible(true);
    ui->city23->setVisible(true);
    ui->city24->setVisible(true);
    ui->city25->setVisible(true);
    ui->city26->setVisible(true);
    ui->city27->setVisible(true);
    ui->city28->setVisible(true);
    ui->city29->setVisible(true);

    ui->city30->setVisible(true);
    ui->city31->setVisible(true);
    ui->city32->setVisible(true);
    ui->city33->setVisible(true);
    ui->city34->setVisible(true);
    ui->city35->setVisible(true);
    ui->city36->setVisible(true);
    ui->city37->setVisible(true);
    ui->city38->setVisible(true);
    ui->city39->setVisible(true);

    ui->city40->setVisible(true);
    ui->city41->setVisible(true);
    ui->city42->setVisible(true);
    ui->pushButton_3->setVisible(false);
}


//function that dictates what cities can the player own, the city can be purchased at first when total rounds is 1, after that player can only buy cities next to his
//the rest of the code from here shows all possible city combinations each player has access to
//all triggered when i specific city is clicked
void MainWindow::on_city1_clicked()
{
//to check if its player ones first turn
    if(one.getNumTurns()==1){
        if (one.getTurn()){ //makes sure its their turn
            one.addCitiesPowered();//if so adds the city
            one.setCity1(true); //sets city 1 as true, meaning that player one owns the city

            QPixmap pix("/Users/admin/test3/red.png"); //sets a red house to the city
                 ui->city1Label->setPixmap(pix);
                 ui->city1->setVisible(false); //radio button then disapears
                one.incrTurn(); //turn incriments
        }
    } else  if (one.getTurn()&one.isCity2()){ //this is to check if player is not on his first turn but does own city 2 (if he does he gets the city)
        one.addCitiesPowered(); //same principle as before, and this continues for every possible combination. Same is also applied to player two
        one.setCity1(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city1Label->setPixmap(pix);
             ui->city1->setVisible(false);
             one.incrTurn();
    }else if (one.getTurn()&one.isCity3()){
        one.addCitiesPowered();
        one.setCity1(true); //CHANGE
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city1Label->setPixmap(pix);
             ui->city1->setVisible(false);
             one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity1(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city1->setVisible(false);
                             ui->city1Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity2()){
            two.addCitiesPowered();
            two.setCity1(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city1Label->setPixmap(x);
                     ui->city1->setVisible(false);
                     two.incrTurn();

    }
        else if(two.getTurn()&two.isCity3()){
            two.addCitiesPowered();
            two.setCity1(true); //CHANGE
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city1Label->setPixmap(x);
                     ui->city1->setVisible(false);
                     two.incrTurn();
        }
        else {
            //window pop up that tells the user they cannot buy this city
            NoWindow window;
            window.setModal(true);
            window.exec();
        }


}




void MainWindow::on_city2_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){ //check if its players turn
            one.addCitiesPowered(); //adds a city to player
            one.setCity2(true); //adding city to player

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city2Label->setPixmap(pix);
                 ui->city2->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity1()){
        one.addCitiesPowered(); //adds a city to player
        one.setCity2(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city2Label->setPixmap(pix);
             ui->city2->setVisible(false);
             one.incrTurn();
    }else if (one.getTurn()&one.isCity4()){
        one.addCitiesPowered(); //adds a city to player
        one.setCity2(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city2Label->setPixmap(pix);
             ui->city2->setVisible(false);
             one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity2(true);
                QPixmap x("/Users/admin/test3/blue.png");
                             ui->city2Label->setPixmap(x);
                             ui->city2->setVisible(false);

                             two.incrTurn();
        }
    } else

        if(two.getTurn()&two.isCity1()){
            two.addCitiesPowered();
            two.setCity2(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city2Label->setPixmap(x);
                     ui->city2->setVisible(false);
                     two.incrTurn();

    }
        else if(two.getTurn()&two.isCity4()){
            two.addCitiesPowered();
            two.setCity2(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city2Label->setPixmap(x);
                     ui->city2->setVisible(false);
                     two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}


void MainWindow::on_city3_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity3(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city3Label->setPixmap(pix);
                 ui->city3->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity1()){
        one.addCitiesPowered();
        one.setCity3(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city3Label->setPixmap(pix);
             ui->city3->setVisible(false);
             one.incrTurn();
    }else if (one.getTurn()&one.isCity2()){
        one.addCitiesPowered();
        one.setCity3(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city3Label->setPixmap(pix);
             ui->city3->setVisible(false);
             one.incrTurn();

    }else if (one.getTurn()&one.isCity22()){
        one.addCitiesPowered();
        one.setCity3(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city3Label->setPixmap(pix);
             ui->city3->setVisible(false);
             one.incrTurn();


    }else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity3(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city3->setVisible(false);
                             ui->city3Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity1()){
            two.addCitiesPowered();
            two.setCity3(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city3Label->setPixmap(x);
                     ui->city3->setVisible(false);
                     two.incrTurn();

    }
        else if(two.getTurn()&two.isCity2()){
            two.addCitiesPowered();
            two.setCity3(true); //CHANGE
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city3Label->setPixmap(x);
                     ui->city3->setVisible(false);
                     two.incrTurn();
        }
        else if(two.getTurn()&two.isCity22()){
            two.addCitiesPowered();
            two.setCity3(true); //CHANGE
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city3Label->setPixmap(x);
                     ui->city3->setVisible(false);
                     two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city4_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity4(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city4Label->setPixmap(pix);
                 ui->city4->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity2()){
        one.addCitiesPowered();
        one.setCity4(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city4Label->setPixmap(pix);
             ui->city4->setVisible(false);
             one.incrTurn();
    }else if (one.getTurn()&one.isCity5()){
        one.addCitiesPowered();
        one.setCity4(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city4Label->setPixmap(pix);
             ui->city4->setVisible(false);
             one.incrTurn();

    }else if (one.getTurn()&one.isCity22()){
        one.addCitiesPowered();
        one.setCity4(true);
        QPixmap pix("/Users/admin/test3/red.png");

             ui->city4Label->setPixmap(pix);
             ui->city4->setVisible(false);
             one.incrTurn();
    }
    else if (one.getTurn()&one.isCity21()){
            one.addCitiesPowered();
            one.setCity4(true);
            QPixmap pix("/Users/admin/test3/red.png");

                 ui->city4Label->setPixmap(pix);
                 ui->city4->setVisible(false);
                 one.incrTurn();
        }
    else if (one.getTurn()&one.isCity20()){
            one.addCitiesPowered();
            one.setCity4(true);
            QPixmap pix("/Users/admin/test3/red.png");

                 ui->city4Label->setPixmap(pix);
                 ui->city4->setVisible(false);
                 one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity4(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city4->setVisible(false);
                             ui->city4Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity2()){
            two.addCitiesPowered();
            two.setCity4(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city4Label->setPixmap(x);
                     ui->city4->setVisible(false);
                     two.incrTurn();

    }
        else if(two.getTurn()&two.isCity5()){
            two.addCitiesPowered();
            two.setCity1(true); //CHANGE
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city4->setVisible(false);
                     ui->city4Label->setPixmap(x);
                     two.incrTurn();
        }
        else if(two.getTurn()&two.isCity22()){
            two.addCitiesPowered();
            two.setCity1(true); //CHANGE
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city4->setVisible(false);
                     ui->city4Label->setPixmap(x);
                     two.incrTurn();
        }
        else if(two.getTurn()&two.isCity21()){
            two.addCitiesPowered();
            two.setCity1(true); //CHANGE
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city4->setVisible(false);
                     ui->city4Label->setPixmap(x);
                     two.incrTurn();
        }
        else if(two.getTurn()&two.isCity20()){
            two.addCitiesPowered();
            two.setCity1(true); //CHANGE
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city4->setVisible(false);
                     ui->city4Label->setPixmap(x);
                     two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }



}

void MainWindow::on_city5_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity5(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city5Label->setPixmap(pix);
                 ui->city5->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity4()){ //change
        one.addCitiesPowered();
        one.setCity5(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city5Label->setPixmap(pix);
             ui->city5->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity6()){ //change
        one.addCitiesPowered();
        one.setCity5(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city5Label->setPixmap(pix);
             ui->city5->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity19()){ //change
            one.addCitiesPowered();
            one.setCity5(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city5Label->setPixmap(pix);
                 ui->city5->setVisible(false);
                one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity5(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city5->setVisible(false);
                             ui->city5Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity4()){
            two.addCitiesPowered();
            two.setCity5(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city5->setVisible(false);
                         ui->city5Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity6()){
            two.addCitiesPowered();
            two.setCity5(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city5->setVisible(false);
                         ui->city5Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity19()){
            two.addCitiesPowered();
            two.setCity5(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city5->setVisible(false);
                         ui->city5Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city6_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity6(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city6Label->setPixmap(pix);
                 ui->city6->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity5()){ //change
        one.addCitiesPowered();
        one.setCity6(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city6Label->setPixmap(pix);
             ui->city6->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity19()){ //change
        one.addCitiesPowered();
        one.setCity6(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city6Label->setPixmap(pix);
             ui->city6->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity7()){ //change
        one.addCitiesPowered();
        one.setCity6(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city6Label->setPixmap(pix);
             ui->city6->setVisible(false);
            one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity6(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city6->setVisible(false);
                             ui->city6Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity5()){
            two.addCitiesPowered();
            two.setCity6(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city6->setVisible(false);
                         ui->city6Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity19()){ //change
            two.addCitiesPowered();
            two.setCity6(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city6->setVisible(false);
                         ui->city6Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity7()){ //change
            two.addCitiesPowered();
            two.setCity6(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city6->setVisible(false);
                         ui->city6Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city7_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity7(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city7Label->setPixmap(pix);
                 ui->city7->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity6()){
        one.addCitiesPowered();
        one.setCity7(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city7Label->setPixmap(pix);
             ui->city7->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity19()){ //change
        one.addCitiesPowered();
        one.setCity7(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city7Label->setPixmap(pix);
             ui->city7->setVisible(false);
            one.incrTurn();
    } else if (one.getTurn()&one.isCity8()){ //change
        one.addCitiesPowered();
        one.setCity7(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city7Label->setPixmap(pix);
             ui->city7->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity18()){ //change
            one.addCitiesPowered();
            one.setCity7(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city7Label->setPixmap(pix);
                 ui->city7->setVisible(false);
                one.incrTurn();
    }
    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity7(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city7->setVisible(false);
                             ui->city7Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity6()){
            two.addCitiesPowered();
            two.setCity7(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city7->setVisible(false);
                         ui->city7Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity19()){
            two.addCitiesPowered();
            two.setCity7(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city7->setVisible(false);
                         ui->city7Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity8()){
            two.addCitiesPowered();
            two.setCity7(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city7->setVisible(false);
                         ui->city7Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity18()){
            two.addCitiesPowered();
            two.setCity7(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city7->setVisible(false);
                         ui->city7Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city8_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity8(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city8Label->setPixmap(pix);
                 ui->city8->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity7()){
        one.addCitiesPowered();
        one.setCity8(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city8Label->setPixmap(pix);
             ui->city8->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity18()){ //change
        one.addCitiesPowered();
        one.setCity8(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city8Label->setPixmap(pix);
             ui->city8->setVisible(false);
            one.incrTurn();
    }
    else  if (one.getTurn()&one.isCity16()){
            one.addCitiesPowered();
            one.setCity8(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city8Label->setPixmap(pix);
                 ui->city8->setVisible(false);
                one.incrTurn();
        }
    else  if (one.getTurn()&one.isCity9()){
            one.addCitiesPowered();
            one.setCity8(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city8Label->setPixmap(pix);
                 ui->city8->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity8(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city8->setVisible(false);
                             ui->city8Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity7()){
            two.addCitiesPowered();
            two.setCity8(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city8->setVisible(false);
                         ui->city8Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity18()){
            two.addCitiesPowered();
            two.setCity8(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city8->setVisible(false);
                         ui->city8Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity16()){
            two.addCitiesPowered();
            two.setCity8(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city8->setVisible(false);
                         ui->city8Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity9()){
            two.addCitiesPowered();
            two.setCity8(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city8->setVisible(false);
                         ui->city8Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city9_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity9(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city9Label->setPixmap(pix);
                 ui->city9->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity8()){
        one.addCitiesPowered();
        one.setCity9(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city9Label->setPixmap(pix);
             ui->city9->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity16()){
        one.addCitiesPowered();
        one.setCity9(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city9Label->setPixmap(pix);
             ui->city9->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity10()){
            one.addCitiesPowered();
            one.setCity9(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city9Label->setPixmap(pix);
                 ui->city9->setVisible(false);
                one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity9(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city9->setVisible(false);
                             ui->city9Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity8()){
            two.addCitiesPowered();
            two.setCity9(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city9->setVisible(false);
                         ui->city9Label->setPixmap(x);
                         two.incrTurn();
    }
        else if(two.getTurn()&two.isCity16()){
            two.addCitiesPowered();
            two.setCity9(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city9->setVisible(false);
                         ui->city9Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity10()){
            two.addCitiesPowered();
            two.setCity9(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city9->setVisible(false);
                         ui->city9Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city10_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity10(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city10Label->setPixmap(pix);
                 ui->city10->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity9()){
        one.addCitiesPowered();
        one.setCity10(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city10Label->setPixmap(pix);
             ui->city10->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity16()){
        one.addCitiesPowered();
        one.setCity10(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city10Label->setPixmap(pix);
             ui->city10->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity15()){
            one.addCitiesPowered();
            one.setCity10(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city10Label->setPixmap(pix);
                 ui->city10->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity11()){
            one.addCitiesPowered();
            one.setCity10(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city10Label->setPixmap(pix);
                 ui->city10->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity10(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city10->setVisible(false);
                             ui->city10Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity9()){
            two.addCitiesPowered();
            two.setCity10(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city10->setVisible(false);
                         ui->city10Label->setPixmap(x);
                         two.incrTurn();


    }
        else if(two.getTurn()&two.isCity16()){
            two.addCitiesPowered();
            two.setCity10(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city10->setVisible(false);
                         ui->city10Label->setPixmap(x);
                         two.incrTurn();

        }
        else if(two.getTurn()&two.isCity15()){
            two.addCitiesPowered();
            two.setCity10(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city10->setVisible(false);
                         ui->city10Label->setPixmap(x);
                         two.incrTurn();

        }
        else if(two.getTurn()&two.isCity11()){
            two.addCitiesPowered();
            two.setCity10(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city10->setVisible(false);
                         ui->city10Label->setPixmap(x);
                         two.incrTurn();

        }

        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city11_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity11(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city11Label->setPixmap(pix);
                 ui->city11->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity10()){
        one.addCitiesPowered();
        one.setCity11(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city11Label->setPixmap(pix);
             ui->city11->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity14()){
        one.addCitiesPowered();
        one.setCity11(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city11Label->setPixmap(pix);
             ui->city11->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity12()){
            one.addCitiesPowered();
            one.setCity11(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city11Label->setPixmap(pix);
                 ui->city11->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity11(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city11->setVisible(false);
                             ui->city11Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity10()){ //change
            two.addCitiesPowered();
            two.setCity11(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city11->setVisible(false);
                         ui->city11Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity14()){ //change
            two.addCitiesPowered();
            two.setCity11(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city11->setVisible(false);
                         ui->city11Label->setPixmap(x);
                         two.incrTurn();
        }

        else if(two.getTurn()&two.isCity12()){ //change
            two.addCitiesPowered();
            two.setCity11(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city11->setVisible(false);
                         ui->city11Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }


}

void MainWindow::on_city12_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity12(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city12Label->setPixmap(pix);
                 ui->city12->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity11()){
        one.addCitiesPowered();
        one.setCity12(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city12Label->setPixmap(pix);
             ui->city12->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity14()){
        one.addCitiesPowered();
        one.setCity12(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city12Label->setPixmap(pix);
             ui->city12->setVisible(false);
            one.incrTurn();
    } else if (one.getTurn()&one.isCity13()){
        one.addCitiesPowered();
        one.setCity12(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city12Label->setPixmap(pix);
             ui->city12->setVisible(false);
            one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
            two.addCitiesPowered();
            two.setCity12(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city12Label->setPixmap(x);
                     ui->city12->setVisible(false);
                     two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity13()){
            two.addCitiesPowered();
            two.setCity12(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city12Label->setPixmap(x);
                     ui->city12->setVisible(false);
                     two.incrTurn();

    }
        else if(two.getTurn()&two.isCity14()){
            two.addCitiesPowered();
            two.setCity12(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city12Label->setPixmap(x);
                     ui->city12->setVisible(false);
                     two.incrTurn();
        }
        else if(two.getTurn()&two.isCity13()){
            two.addCitiesPowered();
            two.setCity12(true);
             QPixmap x("/Users/admin/test3/blue.png");
                     ui->city12Label->setPixmap(x);
                     ui->city12->setVisible(false);
                     two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city13_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity13(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city13Label->setPixmap(pix);
                 ui->city13->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity12()){
        one.addCitiesPowered();
        one.setCity13(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city13Label->setPixmap(pix);
             ui->city13->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity14()){
        one.addCitiesPowered();
        one.setCity13(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city13Label->setPixmap(pix);
             ui->city13->setVisible(false);
            one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity13(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city13->setVisible(false);
                             ui->city13Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity12()){ //change
            two.addCitiesPowered();
            two.setCity13(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city13->setVisible(false);
                         ui->city13Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity14()){ //change
            two.addCitiesPowered();
            two.setCity13(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city13->setVisible(false);
                         ui->city13Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }


}

void MainWindow::on_city14_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity14(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city14Label->setPixmap(pix);
                 ui->city14->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity13()){
        one.addCitiesPowered();
        one.setCity14(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city14Label->setPixmap(pix);
             ui->city14->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity15()){
        one.addCitiesPowered();
        one.addCitiesPowered();
        one.setCity14(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city14Label->setPixmap(pix);
             ui->city14->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity11()){
            one.addCitiesPowered();
            one.addCitiesPowered();
            one.setCity14(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city14Label->setPixmap(pix);
                 ui->city14->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity12()){
            one.addCitiesPowered();
            one.addCitiesPowered();
            one.setCity14(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city14Label->setPixmap(pix);
                 ui->city14->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity30()){
            one.addCitiesPowered();
            one.addCitiesPowered();
            one.setCity14(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city14Label->setPixmap(pix);
                 ui->city14->setVisible(false);
                one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity14(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city14->setVisible(false);
                             ui->city14Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity13()){
            two.addCitiesPowered();
            two.setCity14(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city14->setVisible(false);
                         ui->city14Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity15()){
            two.addCitiesPowered();
            two.setCity14(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city14->setVisible(false);
                         ui->city14Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity11()){
            two.addCitiesPowered();
            two.setCity14(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city14->setVisible(false);
                         ui->city14Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity12()){ //change
            two.addCitiesPowered();
            two.setCity14(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city14->setVisible(false);
                         ui->city14Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity30()){ //change
            two.addCitiesPowered();
            two.setCity14(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city14->setVisible(false);
                         ui->city14Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city15_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity15(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city15Label->setPixmap(pix);
                 ui->city15->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity14()){
        one.addCitiesPowered();
        one.setCity15(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city15Label->setPixmap(pix);
             ui->city15->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity16()){
        one.addCitiesPowered();
        one.setCity15(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city15Label->setPixmap(pix);
             ui->city15->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity10()){
            one.addCitiesPowered();
            one.setCity15(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city15Label->setPixmap(pix);
                 ui->city15->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity30()){
            one.addCitiesPowered();
            one.setCity15(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city15Label->setPixmap(pix);
                 ui->city15->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity15(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city15->setVisible(false);
                             ui->city15Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity14()){ //change
            two.addCitiesPowered();
            two.setCity15(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city15->setVisible(false);
                         ui->city15Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity16()){ //change
            two.addCitiesPowered();
            two.setCity15(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city15->setVisible(false);
                         ui->city15Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity10()){ //change
            two.addCitiesPowered();
            two.setCity15(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city15->setVisible(false);
                         ui->city15Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity30()){ //change
            two.addCitiesPowered();
            two.setCity15(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city15->setVisible(false);
                         ui->city15Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city16_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity16(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city16Label->setPixmap(pix);
                 ui->city16->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity15()){
        one.addCitiesPowered();
        one.setCity16(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city16Label->setPixmap(pix);
             ui->city16->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity10()){
        one.addCitiesPowered();
        one.setCity16(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city16Label->setPixmap(pix);
             ui->city16->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity9()){
            one.addCitiesPowered();
            one.setCity16(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city16Label->setPixmap(pix);
                 ui->city16->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity8()){
            one.addCitiesPowered();
            one.setCity16(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city16Label->setPixmap(pix);
                 ui->city16->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity17()){
            one.addCitiesPowered();
            one.setCity16(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city16Label->setPixmap(pix);
                 ui->city16->setVisible(false);
                one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity16(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city16->setVisible(false);
                             ui->city16Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity15()){
            two.addCitiesPowered();
            two.setCity16(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city16->setVisible(false);
                         ui->city16Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity10()){
            two.addCitiesPowered();
            two.setCity16(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city16->setVisible(false);
                         ui->city16Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity9()){
            two.addCitiesPowered();
            two.setCity16(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city16->setVisible(false);
                         ui->city16Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity8()){
            two.addCitiesPowered();
            two.setCity16(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city16->setVisible(false);
                         ui->city16Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity17()){
            two.addCitiesPowered();
            two.setCity16(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city16->setVisible(false);
                         ui->city16Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city17_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity17(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city17Label->setPixmap(pix);
                 ui->city17->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity16()){
        one.addCitiesPowered();
        one.setCity17(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city17Label->setPixmap(pix);
             ui->city17->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity30()){
        one.addCitiesPowered();
        one.setCity17(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city17Label->setPixmap(pix);
             ui->city17->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity29()){
            one.addCitiesPowered();
            one.setCity17(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city17Label->setPixmap(pix);
                 ui->city17->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity18()){
            one.addCitiesPowered();
            one.setCity17(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city17Label->setPixmap(pix);
                 ui->city17->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity17(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city17->setVisible(false);
                             ui->city17Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity16()){ //change
            two.addCitiesPowered();
            two.setCity17(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city17->setVisible(false);
                         ui->city17Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity30()){ //change
            two.addCitiesPowered();
            two.setCity17(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city17->setVisible(false);
                         ui->city17Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity29()){ //change
            two.addCitiesPowered();
            two.setCity17(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city17->setVisible(false);
                         ui->city17Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity18()){ //change
            two.addCitiesPowered();
            two.setCity17(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city17->setVisible(false);
                         ui->city17Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city18_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity18(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city18Label->setPixmap(pix);
                 ui->city18->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity17()){
        one.addCitiesPowered();
        one.setCity18(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city18Label->setPixmap(pix);
             ui->city18->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity8()){
        one.addCitiesPowered();
        one.setCity18(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city18Label->setPixmap(pix);
             ui->city18->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity7()){
            one.addCitiesPowered();
            one.setCity18(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city18Label->setPixmap(pix);
                 ui->city18->setVisible(false);
                one.incrTurn();}

    else if (one.getTurn()&one.isCity19()){ //change
            one.addCitiesPowered();
            one.setCity18(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city18Label->setPixmap(pix);
                 ui->city18->setVisible(false);
                one.incrTurn();}

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity18(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city18->setVisible(false);
                             ui->city18Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity17()){
            two.addCitiesPowered();
            two.setCity18(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city18->setVisible(false);
                         ui->city18Label->setPixmap(x);
                         two.incrTurn();


    }
        else if(two.getTurn()&two.isCity8()){
            two.addCitiesPowered();
            two.setCity18(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city18->setVisible(false);
                         ui->city18Label->setPixmap(x);
                         two.incrTurn();

        }
        else if(two.getTurn()&two.isCity7()){
            two.addCitiesPowered();
            two.setCity18(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city18->setVisible(false);
                         ui->city18Label->setPixmap(x);
                         two.incrTurn();

        }
        else if(two.getTurn()&two.isCity19()){
            two.addCitiesPowered();
            two.setCity18(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city18->setVisible(false);
                         ui->city18Label->setPixmap(x);
                         two.incrTurn();

        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city19_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity19(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city19Label->setPixmap(pix);
                 ui->city19->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity18()){
        one.addCitiesPowered();
        one.setCity19(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city19Label->setPixmap(pix);
             ui->city19->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity7()){
        one.addCitiesPowered();
        one.setCity19(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city19Label->setPixmap(pix);
             ui->city19->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity6()){
            one.addCitiesPowered();
            one.setCity19(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city19Label->setPixmap(pix);
                 ui->city19->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity5()){
            one.addCitiesPowered();
            one.setCity19(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city19Label->setPixmap(pix);
                 ui->city19->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity20()){
            one.addCitiesPowered();
            one.setCity19(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city19Label->setPixmap(pix);
                 ui->city19->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity19(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city19->setVisible(false);
                             ui->city19Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity18()){
            two.addCitiesPowered();
            two.setCity19(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city19->setVisible(false);
                         ui->city19Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity7()){
            two.addCitiesPowered();
            two.setCity19(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city19->setVisible(false);
                         ui->city19Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity6()){
            two.addCitiesPowered();
            two.setCity19(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city19->setVisible(false);
                         ui->city19Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity5()){
            two.addCitiesPowered();
            two.setCity19(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city19->setVisible(false);
                         ui->city19Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity20()){
            two.addCitiesPowered();
            two.setCity19(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city19->setVisible(false);
                         ui->city19Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city20_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity20(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city20Label->setPixmap(pix);
                 ui->city20->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity19()){
        one.addCitiesPowered();
        one.setCity20(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city20Label->setPixmap(pix);
             ui->city20->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity4()){
        one.addCitiesPowered();
        one.setCity20(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city20Label->setPixmap(pix);
             ui->city20->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity21()){
            one.addCitiesPowered();
            one.setCity20(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city20Label->setPixmap(pix);
                 ui->city20->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity29()){
            one.addCitiesPowered();
            one.setCity20(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city20Label->setPixmap(pix);
                 ui->city20->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity20(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city20->setVisible(false);
                             ui->city20Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity19()){
            two.addCitiesPowered();
            two.setCity20(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city20->setVisible(false);
                         ui->city20Label->setPixmap(x);
                         two.incrTurn();


    }
        else if(two.getTurn()&two.isCity4()){
            two.addCitiesPowered();
            two.setCity20(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city20->setVisible(false);
                         ui->city20Label->setPixmap(x);
                         two.incrTurn();

        }
        else if(two.getTurn()&two.isCity21()){
            two.addCitiesPowered();
            two.setCity20(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city20->setVisible(false);
                         ui->city20Label->setPixmap(x);
                         two.incrTurn();

        }
        else if(two.getTurn()&two.isCity29()){
            two.addCitiesPowered();
            two.setCity20(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city20->setVisible(false);
                         ui->city20Label->setPixmap(x);
                         two.incrTurn();

        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city21_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity21(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city21Label->setPixmap(pix);
                 ui->city21->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity20()){
        one.addCitiesPowered();
        one.setCity21(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city21Label->setPixmap(pix);
             ui->city21->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity29()){
        one.addCitiesPowered();
        one.setCity21(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city21Label->setPixmap(pix);
             ui->city21->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity28()){
            one.addCitiesPowered();
            one.setCity21(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city21Label->setPixmap(pix);
                 ui->city21->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity27()){
            one.addCitiesPowered();
            one.setCity21(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city21Label->setPixmap(pix);
                 ui->city21->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity22()){
            one.addCitiesPowered();
            one.setCity21(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city21Label->setPixmap(pix);
                 ui->city21->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity4()){
            one.addCitiesPowered();
            one.setCity21(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city21Label->setPixmap(pix);
                 ui->city21->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity21(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city21->setVisible(false);
                             ui->city21Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity20()){
            two.addCitiesPowered();
            two.setCity21(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city21->setVisible(false);
                         ui->city21Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity29()){
            two.addCitiesPowered();
            two.setCity21(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city21->setVisible(false);
                         ui->city21Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity28()){
            two.addCitiesPowered();
            two.setCity21(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city21->setVisible(false);
                         ui->city21Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity27()){
            two.addCitiesPowered();
            two.setCity21(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city21->setVisible(false);
                         ui->city21Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity22()){
            two.addCitiesPowered();
            two.setCity21(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city21->setVisible(false);
                         ui->city21Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity4()){
            two.addCitiesPowered();
            two.setCity21(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city21->setVisible(false);
                         ui->city21Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city22_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity22(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city22Label->setPixmap(pix);
                 ui->city22->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity21()){
        one.addCitiesPowered();
        one.setCity22(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city22Label->setPixmap(pix);
             ui->city22->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity4()){
        one.addCitiesPowered();
        one.setCity22(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city22Label->setPixmap(pix);
             ui->city22->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity2()){
            one.addCitiesPowered();
            one.setCity22(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city22Label->setPixmap(pix);
                 ui->city22->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity3()){
            one.addCitiesPowered();
            one.setCity22(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city22Label->setPixmap(pix);
                 ui->city22->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity23()){
            one.addCitiesPowered();
            one.setCity22(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city22Label->setPixmap(pix);
                 ui->city22->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity22(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city22->setVisible(false);
                             ui->city22Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity21()){
            two.addCitiesPowered();
            two.setCity22(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city22->setVisible(false);
                         ui->city22Label->setPixmap(x);
                         two.incrTurn();
    }
        else if(two.getTurn()&two.isCity4()){
            two.addCitiesPowered();
            two.setCity22(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city22->setVisible(false);
                         ui->city22Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity2()){
            two.addCitiesPowered();
            two.setCity22(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city22->setVisible(false);
                         ui->city22Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity3()){
            two.addCitiesPowered();
            two.setCity22(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city22->setVisible(false);
                         ui->city22Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity23()){
            two.addCitiesPowered();
            two.setCity22(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city22->setVisible(false);
                         ui->city22Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city23_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity23(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city23Label->setPixmap(pix);
                 ui->city23->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity22()){
        one.addCitiesPowered();
        one.setCity23(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city23Label->setPixmap(pix);
             ui->city23->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity3()){
        one.addCitiesPowered();
        one.setCity23(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city23Label->setPixmap(pix);
             ui->city23->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity24()){
            one.addCitiesPowered();
            one.setCity23(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city23Label->setPixmap(pix);
                 ui->city23->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity25()){
            one.addCitiesPowered();
            one.setCity23(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city23Label->setPixmap(pix);
                 ui->city23->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity23(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city23->setVisible(false);
                             ui->city23Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity22()){
            two.addCitiesPowered();
            two.setCity23(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city23->setVisible(false);
                         ui->city23Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity3()){
            two.addCitiesPowered();
            two.setCity23(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city23->setVisible(false);
                         ui->city23Label->setPixmap(x);
                         two.incrTurn();
        }
    else if(two.getTurn()&two.isCity24()){
                two.addCitiesPowered();
                two.setCity23(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city23->setVisible(false);
                             ui->city23Label->setPixmap(x);
                             two.incrTurn();
            }
    else if(two.getTurn()&two.isCity25()){
                two.addCitiesPowered();
                two.setCity23(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city23->setVisible(false);
                             ui->city23Label->setPixmap(x);
                             two.incrTurn();
            }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city24_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity24(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city24Label->setPixmap(pix);
                 ui->city24->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity23()){
        one.addCitiesPowered();
        one.setCity24(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city24Label->setPixmap(pix);
             ui->city24->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity3()){
        one.addCitiesPowered();
        one.setCity24(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city24Label->setPixmap(pix);
             ui->city24->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity25()){
            one.addCitiesPowered();
            one.setCity24(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city24Label->setPixmap(pix);
                 ui->city24->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity24(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city24->setVisible(false);
                             ui->city24Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity23()){
            two.addCitiesPowered();
            two.setCity24(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city24->setVisible(false);
                         ui->city24Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity3()){
            two.addCitiesPowered();
            two.setCity24(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city24->setVisible(false);
                         ui->city24Label->setPixmap(x);
                         two.incrTurn();
        }
        else

                if(two.getTurn()&two.isCity25()){
                    two.addCitiesPowered();
                    two.setCity24(true);
                    QPixmap x("/Users/admin/test3/blue.png");
                                ui->city24->setVisible(false);
                                 ui->city24Label->setPixmap(x);
                                 two.incrTurn();

            }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city25_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity25(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city25Label->setPixmap(pix);
                 ui->city25->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity24()){
        one.addCitiesPowered();
        one.setCity25(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city25Label->setPixmap(pix);
             ui->city25->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity23()){
        one.addCitiesPowered();
        one.setCity25(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city25Label->setPixmap(pix);
             ui->city25->setVisible(false);
            one.incrTurn();
    }
    else  if (one.getTurn()&one.isCity26()){
           one.addCitiesPowered();
           one.setCity25(true);

           QPixmap pix("/Users/admin/test3/red.png");
                ui->city25Label->setPixmap(pix);
                ui->city25->setVisible(false);
               one.incrTurn();
       }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity25(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city25->setVisible(false);
                             ui->city25Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity24()){
            two.addCitiesPowered();
            two.setCity25(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city25->setVisible(false);
                         ui->city25Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity23()){
            two.addCitiesPowered();
            two.setCity25(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city25->setVisible(false);
                         ui->city25Label->setPixmap(x);
                         two.incrTurn();
        }
        else

                if(two.getTurn()&two.isCity26()){
                    two.addCitiesPowered();
                    two.setCity25(true);
                    QPixmap x("/Users/admin/test3/blue.png");
                                ui->city25->setVisible(false);
                                 ui->city25Label->setPixmap(x);
                                 two.incrTurn();

            }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city26_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity26(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city26Label->setPixmap(pix);
                 ui->city26->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity27()){
        one.addCitiesPowered();
        one.setCity26(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city26Label->setPixmap(pix);
             ui->city26->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity25()){
        one.addCitiesPowered();
        one.setCity26(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city26Label->setPixmap(pix);
             ui->city26->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity42()){
            one.addCitiesPowered();
            one.setCity26(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city26Label->setPixmap(pix);
                 ui->city26->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity28()){
            one.addCitiesPowered();
            one.setCity26(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city26Label->setPixmap(pix);
                 ui->city26->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity41()){
            one.addCitiesPowered();
            one.setCity26(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city26Label->setPixmap(pix);
                 ui->city26->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity26(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city26->setVisible(false);
                             ui->city26Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity27()){
            two.addCitiesPowered();
            two.setCity26(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city26->setVisible(false);
                         ui->city26Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity25()){
            two.addCitiesPowered();
            two.setCity26(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city26->setVisible(false);
                         ui->city26Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity42()){
            two.addCitiesPowered();
            two.setCity26(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city26->setVisible(false);
                         ui->city26Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity28()){
            two.addCitiesPowered();
            two.setCity26(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city26->setVisible(false);
                         ui->city26Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity41()){
            two.addCitiesPowered();
            two.setCity26(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city26->setVisible(false);
                         ui->city26Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city27_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity27(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city27Label->setPixmap(pix);
                 ui->city27->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity26()){
        one.addCitiesPowered();
        one.setCity27(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city27Label->setPixmap(pix);
             ui->city27->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity21()){
        one.addCitiesPowered();
        one.setCity27(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city27Label->setPixmap(pix);
             ui->city27->setVisible(false);
            one.incrTurn();
    }
    else  if (one.getTurn()&one.isCity28()){
            one.addCitiesPowered();
            one.setCity27(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city27Label->setPixmap(pix);
                 ui->city27->setVisible(false);
                one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity27(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city27->setVisible(false);
                             ui->city27Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity26()){
            two.addCitiesPowered();
            two.setCity27(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city27->setVisible(false);
                         ui->city27Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity21()){
            two.addCitiesPowered();
            two.setCity27(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city27->setVisible(false);
                         ui->city27Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity28()){
            two.addCitiesPowered();
            two.setCity27(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city27->setVisible(false);
                         ui->city27Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city28_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity28(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city28Label->setPixmap(pix);
                 ui->city28->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity27()){
        one.addCitiesPowered();
        one.setCity28(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city28Label->setPixmap(pix);
             ui->city28->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity26()){
        one.addCitiesPowered();
        one.setCity28(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city28Label->setPixmap(pix);
             ui->city28->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity41()){
            one.addCitiesPowered();
            one.setCity28(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city28Label->setPixmap(pix);
                 ui->city28->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity32()){
            one.addCitiesPowered();
            one.setCity28(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city28Label->setPixmap(pix);
                 ui->city28->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity29()){
            one.addCitiesPowered();
            one.setCity28(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city28Label->setPixmap(pix);
                 ui->city28->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity21()){
            one.addCitiesPowered();
            one.setCity28(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city28Label->setPixmap(pix);
                 ui->city28->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity28(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city28->setVisible(false);
                             ui->city28Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity27()){
            two.addCitiesPowered();
            two.setCity28(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city28->setVisible(false);
                         ui->city28Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity26()){
            two.addCitiesPowered();
            two.setCity28(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city28->setVisible(false);
                         ui->city28Label->setPixmap(x);
                         two.incrTurn();
        }
        else

                if(two.getTurn()&two.isCity41()){
                    two.addCitiesPowered();
                    two.setCity28(true);
                    QPixmap x("/Users/admin/test3/blue.png");
                                ui->city28->setVisible(false);
                                 ui->city28Label->setPixmap(x);
                                 two.incrTurn();

            }
                else

                        if(two.getTurn()&two.isCity32()){
                            two.addCitiesPowered();
                            two.setCity28(true);
                            QPixmap x("/Users/admin/test3/blue.png");
                                        ui->city28->setVisible(false);
                                         ui->city28Label->setPixmap(x);
                                         two.incrTurn();

                    }
                        else

                                if(two.getTurn()&two.isCity29()){
                                    two.addCitiesPowered();
                                    two.setCity28(true);
                                    QPixmap x("/Users/admin/test3/blue.png");
                                                ui->city28->setVisible(false);
                                                 ui->city28Label->setPixmap(x);
                                                 two.incrTurn();

                            }
                                else

                                        if(two.getTurn()&two.isCity21()){
                                            two.addCitiesPowered();
                                            two.setCity28(true);
                                            QPixmap x("/Users/admin/test3/blue.png");
                                                        ui->city28->setVisible(false);
                                                         ui->city28Label->setPixmap(x);
                                                         two.incrTurn();

                                    }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city29_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity29(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city29Label->setPixmap(pix);
                 ui->city29->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity28()){
        one.addCitiesPowered();
        one.setCity29(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city29Label->setPixmap(pix);
             ui->city29->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity30()){
        one.addCitiesPowered();
        one.setCity29(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city29Label->setPixmap(pix);
             ui->city29->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity17()){
            one.addCitiesPowered();
            one.setCity29(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city29Label->setPixmap(pix);
                 ui->city29->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity20()){
            one.addCitiesPowered();
            one.setCity29(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city29Label->setPixmap(pix);
                 ui->city29->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity21()){
            one.addCitiesPowered();
            one.setCity29(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city29Label->setPixmap(pix);
                 ui->city29->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity29(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city29->setVisible(false);
                             ui->city29Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity28()){
            two.addCitiesPowered();
            two.setCity29(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city29->setVisible(false);
                         ui->city29Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity30()){
            two.addCitiesPowered();
            two.setCity29(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city29->setVisible(false);
                         ui->city29Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity17()){
            two.addCitiesPowered();
            two.setCity29(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city29->setVisible(false);
                         ui->city29Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity20()){
            two.addCitiesPowered();
            two.setCity29(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city29->setVisible(false);
                         ui->city29Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity21()){
            two.addCitiesPowered();
            two.setCity29(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city29->setVisible(false);
                         ui->city29Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city30_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity30(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city30Label->setPixmap(pix);
                 ui->city30->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity29()){
        one.addCitiesPowered();
        one.setCity30(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city30Label->setPixmap(pix);
             ui->city30->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity17()){
        one.addCitiesPowered();
        one.setCity30(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city30Label->setPixmap(pix);
             ui->city30->setVisible(false);
            one.incrTurn();
    } //team f
    else if (one.getTurn()&one.isCity15()){
            one.addCitiesPowered();
            one.setCity30(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city30Label->setPixmap(pix);
                 ui->city30->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity14()){
            one.addCitiesPowered();
            one.setCity30(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city30Label->setPixmap(pix);
                 ui->city30->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity31()){
            one.addCitiesPowered();
            one.setCity30(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city30Label->setPixmap(pix);
                 ui->city30->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity30(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city30->setVisible(false);
                             ui->city30Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity29()){
            two.addCitiesPowered();
            two.setCity30(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city30->setVisible(false);
                         ui->city30Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity17()){
            two.addCitiesPowered();
            two.setCity30(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city30->setVisible(false);
                         ui->city30Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity15()){
            two.addCitiesPowered();
            two.setCity30(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city30->setVisible(false);
                         ui->city30Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity14()){
            two.addCitiesPowered();
            two.setCity30(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city30->setVisible(false);
                         ui->city30Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity31()){ //change
            two.addCitiesPowered();
            two.setCity30(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city30->setVisible(false);
                         ui->city30Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city31_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity31(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city31Label->setPixmap(pix);
                 ui->city31->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity32()){
        one.addCitiesPowered();
        one.setCity31(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city31Label->setPixmap(pix);
             ui->city31->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity30()){
        one.addCitiesPowered();
        one.setCity31(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city31Label->setPixmap(pix);
             ui->city31->setVisible(false);
            one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity31(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city31->setVisible(false);
                             ui->city31Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity32()){
            two.addCitiesPowered();
            two.setCity31(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city31->setVisible(false);
                         ui->city31Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity30()){
            two.addCitiesPowered();
            two.setCity31(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city31->setVisible(false);
                         ui->city31Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city32_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity32(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city32Label->setPixmap(pix);
                 ui->city32->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity31()){
        one.addCitiesPowered();
        one.setCity32(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city32Label->setPixmap(pix);
             ui->city32->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity28()){
        one.addCitiesPowered();
        one.setCity32(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city32Label->setPixmap(pix);
             ui->city32->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity41()){
            one.addCitiesPowered();
            one.setCity32(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city32Label->setPixmap(pix);
                 ui->city32->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity33()){
            one.addCitiesPowered();
            one.setCity32(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city32Label->setPixmap(pix);
                 ui->city32->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity32(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city32->setVisible(false);
                             ui->city32Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity28()){
            two.addCitiesPowered();
            two.setCity32(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city32->setVisible(false);
                         ui->city32Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity31()){
            two.addCitiesPowered();
            two.setCity32(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city32->setVisible(false);
                         ui->city32Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity41()){
            two.addCitiesPowered();
            two.setCity32(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city32->setVisible(false);
                         ui->city32Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity33()){
            two.addCitiesPowered();
            two.setCity32(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city32->setVisible(false);
                         ui->city32Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }


}

void MainWindow::on_city33_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity33(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city33Label->setPixmap(pix);
                 ui->city33->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity32()){
        one.addCitiesPowered();
        one.setCity33(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city33Label->setPixmap(pix);
             ui->city33->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity41()){
        one.addCitiesPowered();
        one.setCity33(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city33Label->setPixmap(pix);
             ui->city33->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity34()){
            one.addCitiesPowered();
            one.setCity33(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city33Label->setPixmap(pix);
                 ui->city33->setVisible(false);
                one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity33(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city33->setVisible(false);
                             ui->city33Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity32()){
            two.addCitiesPowered();
            two.setCity33(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city33->setVisible(false);
                         ui->city33Label->setPixmap(x);
                         two.incrTurn();
    }
        else if(two.getTurn()&two.isCity41()){
            two.addCitiesPowered();
            two.setCity33(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city33->setVisible(false);
                         ui->city33Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity34()){
            two.addCitiesPowered();
            two.setCity33(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city33->setVisible(false);
                         ui->city33Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city34_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity34(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city34Label->setPixmap(pix);
                 ui->city34->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity33()){
        one.addCitiesPowered();
        one.setCity34(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city34Label->setPixmap(pix);
             ui->city34->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity38()){
        one.addCitiesPowered();
        one.setCity34(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city34Label->setPixmap(pix);
             ui->city34->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity37()){
        one.addCitiesPowered();
        one.setCity34(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city34Label->setPixmap(pix);
             ui->city34->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity35()){
        one.addCitiesPowered();
        one.setCity34(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city34Label->setPixmap(pix);
             ui->city34->setVisible(false);
            one.incrTurn();
        }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity34(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city34->setVisible(false);
                             ui->city34Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity33()){
            two.addCitiesPowered();
            two.setCity34(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city34->setVisible(false);
                         ui->city34Label->setPixmap(x);
                         two.incrTurn();
    }
        else if(two.getTurn()&two.isCity38()){
            two.addCitiesPowered();
            two.setCity34(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city34->setVisible(false);
                         ui->city34Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity37()){
            two.addCitiesPowered();
            two.setCity34(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city34->setVisible(false);
                         ui->city34Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity35()){
            two.addCitiesPowered();
            two.setCity34(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city34->setVisible(false);
                         ui->city34Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city35_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity35(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city35Label->setPixmap(pix);
                 ui->city35->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity34()){
        one.addCitiesPowered();
        one.setCity35(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city35Label->setPixmap(pix);
             ui->city35->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity36()){
        one.addCitiesPowered();
        one.setCity35(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city35Label->setPixmap(pix);
             ui->city35->setVisible(false);
            one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity35(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city35->setVisible(false);
                             ui->city35Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity34()){
            two.addCitiesPowered();
            two.setCity35(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city35->setVisible(false);
                         ui->city35Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity36()){
            two.addCitiesPowered();
            two.setCity35(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city35->setVisible(false);
                         ui->city35Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city36_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity36(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city36Label->setPixmap(pix);
                 ui->city36->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity35()){
        one.addCitiesPowered();
        one.setCity36(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city36Label->setPixmap(pix);
             ui->city36->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity37()){
        one.addCitiesPowered();
        one.setCity36(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city36Label->setPixmap(pix);
             ui->city36->setVisible(false);
            one.incrTurn();
    }


    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity36(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city36->setVisible(false);
                             ui->city36Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity35()){
            two.addCitiesPowered();
            two.setCity36(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city36->setVisible(false);
                         ui->city36Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity37()){
            two.addCitiesPowered();
            two.setCity36(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city36->setVisible(false);
                         ui->city36Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city37_clicked()
{

    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity37(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city37Label->setPixmap(pix);
                 ui->city37->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity36()){
        one.addCitiesPowered();
        one.setCity37(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city37Label->setPixmap(pix);
             ui->city37->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity34()){
        one.addCitiesPowered();
        one.setCity37(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city37Label->setPixmap(pix);
             ui->city37->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity38()){
            one.addCitiesPowered();
            one.setCity37(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city37Label->setPixmap(pix);
                 ui->city37->setVisible(false);
                one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity37(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city37->setVisible(false);
                             ui->city37Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity36()){
            two.addCitiesPowered();
            two.setCity37(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city37->setVisible(false);
                         ui->city37Label->setPixmap(x);
                         two.incrTurn();
    }
        else if(two.getTurn()&two.isCity34()){
            two.addCitiesPowered();
            two.setCity37(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city37->setVisible(false);
                         ui->city37Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity38()){
            two.addCitiesPowered();
            two.setCity37(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city37->setVisible(false);
                         ui->city37Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }


}

void MainWindow::on_city38_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity38(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city38Label->setPixmap(pix);
                 ui->city38->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity37()){
        one.addCitiesPowered();
        one.setCity38(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city38Label->setPixmap(pix);
             ui->city38->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity34()){
        one.addCitiesPowered();
        one.setCity38(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city38Label->setPixmap(pix);
             ui->city38->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity40()){
        one.addCitiesPowered();
        one.setCity38(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city38Label->setPixmap(pix);
             ui->city38->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity39()){
        one.addCitiesPowered();
        one.setCity38(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city38Label->setPixmap(pix);
             ui->city38->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity41()){
        one.addCitiesPowered();
        one.setCity38(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city38Label->setPixmap(pix);
             ui->city38->setVisible(false);
            one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity38(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city38->setVisible(false);
                             ui->city38Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity37()){
            two.addCitiesPowered();
            two.setCity38(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city38->setVisible(false);
                         ui->city38Label->setPixmap(x);
                         two.incrTurn();
    }
        else if(two.getTurn()&two.isCity34()){
            two.addCitiesPowered();
            two.setCity38(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city38->setVisible(false);
                         ui->city38Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity40()){
            two.addCitiesPowered();
            two.setCity38(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city38->setVisible(false);
                         ui->city38Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity39()){
            two.addCitiesPowered();
            two.setCity38(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city38->setVisible(false);
                         ui->city38Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity41()){
            two.addCitiesPowered();
            two.setCity38(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city38->setVisible(false);
                         ui->city38Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city39_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity39(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city39Label->setPixmap(pix);
                 ui->city39->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity38()){
        one.addCitiesPowered();
        one.setCity39(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city39Label->setPixmap(pix);
             ui->city39->setVisible(false);
            one.incrTurn();

    }else if (one.getTurn()&one.isCity40()){
        one.addCitiesPowered();
        one.setCity39(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city39Label->setPixmap(pix);
             ui->city39->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity42()){
        one.addCitiesPowered();
        one.setCity39(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city39Label->setPixmap(pix);
             ui->city39->setVisible(false);
            one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity39(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city39->setVisible(false);
                             ui->city39Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity38()){
            two.addCitiesPowered();
            two.setCity39(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city39->setVisible(false);
                         ui->city39Label->setPixmap(x);
                         two.incrTurn();
    }
        else if(two.getTurn()&two.isCity40()){
            two.addCitiesPowered();
            two.setCity39(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city39->setVisible(false);
                         ui->city39Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity42()){
            two.addCitiesPowered();
            two.setCity39(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city39->setVisible(false);
                         ui->city39Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}

void MainWindow::on_city40_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity40(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city40Label->setPixmap(pix);
                 ui->city40->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity39()){
        one.addCitiesPowered();
        one.setCity40(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city40Label->setPixmap(pix);
             ui->city40->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity38()){
        one.addCitiesPowered();
        one.setCity40(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city40Label->setPixmap(pix);
             ui->city40->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity41()){
            one.addCitiesPowered();
            one.setCity40(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city40Label->setPixmap(pix);
                 ui->city40->setVisible(false);
                one.incrTurn();
        }
    else if (one.getTurn()&one.isCity42()){
            one.addCitiesPowered();
            one.setCity40(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city40Label->setPixmap(pix);
                 ui->city40->setVisible(false);
                one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity40(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city40->setVisible(false);
                             ui->city40Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity39()){
            two.addCitiesPowered();
            two.setCity40(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city40->setVisible(false);
                         ui->city40Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity38()){
            two.addCitiesPowered();
            two.setCity40(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city40->setVisible(false);
                         ui->city40Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity41()){
            two.addCitiesPowered();
            two.setCity40(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city40->setVisible(false);
                         ui->city40Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity42()){
            two.addCitiesPowered();
            two.setCity40(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city40->setVisible(false);
                         ui->city40Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city41_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity41(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city41Label->setPixmap(pix);
                 ui->city41->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity38()){
        one.addCitiesPowered();
        one.setCity41(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city41Label->setPixmap(pix);
             ui->city41->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity33()){
        one.addCitiesPowered();
        one.setCity41(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city41Label->setPixmap(pix);
             ui->city41->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity32()){
        one.addCitiesPowered();
        one.setCity41(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city41Label->setPixmap(pix);
             ui->city41->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity28()){
        one.addCitiesPowered();
        one.setCity41(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city41Label->setPixmap(pix);
             ui->city41->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity26()){
        one.addCitiesPowered();
        one.setCity41(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city41Label->setPixmap(pix);
             ui->city41->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity42()){
        one.addCitiesPowered();
        one.setCity41(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city41Label->setPixmap(pix);
             ui->city41->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity40()){
        one.addCitiesPowered();
        one.setCity41(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city41Label->setPixmap(pix);
             ui->city41->setVisible(false);
            one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity41(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city41->setVisible(false);
                             ui->city41Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity38()){
            two.addCitiesPowered();
            two.setCity41(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city41->setVisible(false);
                         ui->city41Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity33()){
            two.addCitiesPowered();
            two.setCity41(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city41->setVisible(false);
                         ui->city41Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity32()){
            two.addCitiesPowered();
            two.setCity41(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city41->setVisible(false);
                         ui->city41Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity28()){
            two.addCitiesPowered();
            two.setCity41(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city41->setVisible(false);
                         ui->city41Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity26()){
            two.addCitiesPowered();
            two.setCity41(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city41->setVisible(false);
                         ui->city41Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity42()){
            two.addCitiesPowered();
            two.setCity41(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city41->setVisible(false);
                         ui->city41Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity40()){
            two.addCitiesPowered();
            two.setCity41(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city41->setVisible(false);
                         ui->city41Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }

}

void MainWindow::on_city42_clicked()
{
    if(one.getNumTurns()==1){
        if (one.getTurn()){
            one.addCitiesPowered();
            one.setCity42(true);

            QPixmap pix("/Users/admin/test3/red.png");
                 ui->city42Label->setPixmap(pix);
                 ui->city42->setVisible(false);
                one.incrTurn();
        }
    } else  if (one.getTurn()&one.isCity41()){
        one.addCitiesPowered();
        one.setCity42(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city42Label->setPixmap(pix);
             ui->city42->setVisible(false);
            one.incrTurn();
    }else if (one.getTurn()&one.isCity40()){
        one.addCitiesPowered();
        one.setCity42(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city42Label->setPixmap(pix);
             ui->city42->setVisible(false);
            one.incrTurn();
    }
    else if (one.getTurn()&one.isCity39()){
        one.addCitiesPowered();
        one.setCity42(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city42Label->setPixmap(pix);
             ui->city42->setVisible(false);
            one.incrTurn();
        }
    else if (one.getTurn()&one.isCity26()){
        one.addCitiesPowered();
        one.setCity42(true);

        QPixmap pix("/Users/admin/test3/red.png");
             ui->city42Label->setPixmap(pix);
             ui->city42->setVisible(false);
            one.incrTurn();
        }

    else if(two.getNumTurns()==1){
        if(two.getTurn()){
                two.addCitiesPowered();
                two.setCity42(true);
                QPixmap x("/Users/admin/test3/blue.png");
                            ui->city42->setVisible(false);
                             ui->city42Label->setPixmap(x);
                             two.incrTurn();

        }
    } else

        if(two.getTurn()&two.isCity41()){
            two.addCitiesPowered();
            two.setCity42(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city42->setVisible(false);
                         ui->city42Label->setPixmap(x);
                         two.incrTurn();

    }
        else if(two.getTurn()&two.isCity40()){
            two.addCitiesPowered();
            two.setCity42(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city42->setVisible(false);
                         ui->city42Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity39()){
            two.addCitiesPowered();
            two.setCity42(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city42->setVisible(false);
                         ui->city42Label->setPixmap(x);
                         two.incrTurn();
        }
        else if(two.getTurn()&two.isCity26()){
            two.addCitiesPowered();
            two.setCity42(true);
            QPixmap x("/Users/admin/test3/blue.png");
                        ui->city42->setVisible(false);
                         ui->city42Label->setPixmap(x);
                         two.incrTurn();
        }
        else {
            NoWindow window;
            window.setModal(true);
            window.exec();
        }
}
