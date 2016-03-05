/*
 * Player.h
 *
 *  Created on: Feb 26, 2016
 *      Author: admin
 */

#ifndef PLAYER_H_
#define PLAYER_H_


#include <string>
#include <iostream>

//player class
class Player{
private:
    //variables
    int houses;
    int elektros; //currency
    std::string color;	//allocating color to a specific player
    int amountPowerPlants; //keep count of number of powerplants each player has
    int citiesPowered; //number of cities powered by user
    bool endturn; //ending player turn
    int totTurns; //total number of turns in the game
    //this next sections give a true if player owns the specific city, and false if player does not own city
    bool city1;
    bool city2;
    bool city3;
    bool city4;
    bool city5;
    bool city6;
    bool city7;
    bool city8;
    bool city9;
    bool city10;

    bool city11;
    bool city12;
    bool city13;
    bool city14;
    bool city15;
    bool city16;
    bool city17;
    bool city18;
    bool city19;
    bool city20;

    bool city21;
    bool city22;
    bool city23;
    bool city24;
    bool city25;
    bool city26;
    bool city27;
    bool city28;
    bool city29;
    bool city30;

    bool city31;
    bool city32;
    bool city33;
    bool city34;
    bool city35;
    bool city36;
    bool city37;
    bool city38;
    bool city39;
    bool city40;

    bool city41;
    bool city42;


public:
    //all public methods and constructors
    //every method is defined in the player.cpp file
    Player();

    int getHouses() const;

    int getNumberOfPlants() const;
    void setNumberOfPlants(int n);

    const std::string& getColor() const;
    void setColor(int player);

    void addHouse();
    void addHouses(int n);
    int getNumberOfHouses() const;

    void addMoney(double add);
    void removeMoney(double rem);
    double getElektros() const;

    void setAmountPowerPlants(int n);
    int getAmountPowerPlants() const;

    int getCitiesPowered() const;
    void setCitiesPowered(int citiesPowered);
   void  addCitiesPowered();

   void turn();
   void setTurn();

   bool getTurn();

   int getNumTurns() const;
   void incrTurn(); //+1 to total turns

   //getters and setters for each city
   bool isCity1() const;

   void setCity1(bool city1);
   bool isCity10() const;
   void setCity10(bool city10);

   bool isCity11() const;

   void setCity11(bool city11);

   bool isCity12() const;

   void setCity12(bool city12);

   bool isCity13() const;

   void setCity13(bool city13);

   bool isCity14() const;

   void setCity14(bool city14);

   bool isCity15() const;

   void setCity15(bool city15);

   bool isCity16() const;

   void setCity16(bool city16);

   bool isCity17() const;

   void setCity17(bool city17);

   bool isCity18() const;

   void setCity18(bool city18);

   bool isCity19() const;

   void setCity19(bool city19);

   bool isCity2() const;

   void setCity2(bool city2);

   bool isCity20() const;

   void setCity20(bool city20);

   bool isCity21() const;

   void setCity21(bool city21);

   bool isCity22() const;

   void setCity22(bool city22);

   bool isCity23() const;

   void setCity23(bool city23);

   bool isCity24() const;

   void setCity24(bool city24);
   bool isCity25() const;

   void setCity25(bool city25);

   bool isCity26() const;

   void setCity26(bool city26);

   bool isCity27() const;

   void setCity27(bool city27);

   bool isCity28() const;

   void setCity28(bool city28);

   bool isCity29() const;

   void setCity29(bool city29);

   bool isCity3() const;

   void setCity3(bool city3);

   bool isCity30() const;

   void setCity30(bool city30);

   bool isCity31() const;

   void setCity31(bool city31);

   bool isCity32() const;

   void setCity32(bool city32);

   bool isCity33() const;

   void setCity33(bool city33);

   bool isCity34() const;
   void setCity34(bool city34);

   bool isCity35() const;

   void setCity35(bool city35);

   bool isCity36() const;

   void setCity36(bool city36);

   bool isCity37() const;

   void setCity37(bool city37);

   bool isCity38() const;

   void setCity38(bool city38);

   bool isCity39() const;

   void setCity39(bool city39);

   bool isCity4() const;

   void setCity4(bool city4);

   bool isCity40() const;

   void setCity40(bool city40);

   bool isCity41() const;

   void setCity41(bool city41);

   bool isCity42() const;

   void setCity42(bool city42);

   bool isCity5() const;

   void setCity5(bool city5);

   bool isCity6() const;

   void setCity6(bool city6);
   bool isCity7() const;

   void setCity7(bool city7);

   bool isCity8() const;

   void setCity8(bool city8) ;

   bool isCity9() const;
   void setCity9(bool city9);


};
#endif /* PLAYER_H_ */

