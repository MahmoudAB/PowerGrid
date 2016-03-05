#include "Player.h"
#include "currentplayers.h"


#include <iostream>

using namespace std;

Player::Player() {
    // initiallizing all variables to default player starting point
    houses = 1;
    elektros = 50;
    color = "";
    amountPowerPlants = 0;
    citiesPowered = 0;
    endturn=false;
    totTurns=1;
    city1=false;
    city2=false;
    city3=false;
    city4=false;
    city5=false;
    city6=false;
    city7=false;
    city8=false;
    city9=false;
    city10=false;

    city11=false;
    city12=false;
    city13=false;
    city14=false;
    city15=false;
    city16=false;
    city17=false;
    city18=false;
    city19=false;
    city20=false;

    city21=false;
    city22=false;
    city23=false;
    city24=false;
    city25=false;
    city26=false;
    city27=false;
    city28=false;
    city29=false;
    city30=false;

    city31=false;
    city32=false;
    city33=false;
    city34=false;
    city35=false;
    city36=false;
    city37=false;
    city38=false;
    city39=false;
    city40=false;

    city41=false;
    city42=false;

}

//method to obtain color
const std::string& Player::getColor() const {
    return color;
}
//method to obtain houses
int Player::getHouses() const {
    return houses;
}

//method to set color depending on player
void Player::setColor(int player) {
    if (player == 1) {
        color = "red";
    }
    if (player == 2) {
        color = "blue";
    }
    if (player == 3) {
        color = "yellow";
    }
    if (player == 4) {
        color = "green";
    }
    if (player == 5) {
        color = "purple";
    }
    if (player == 6) {
        color = "pink";
    }
}
//method to incriment user house
void Player::addHouse() {
    houses++;
}
//method to add multiple houses
void Player::addHouses(int n) {
    houses = houses + n;
}
//method that returns amount of house
int Player::getNumberOfHouses() const {
    return houses;
}
//method to add money
void Player::addMoney(double add) {
    elektros = elektros + add;
}
//method to remove money
void Player::removeMoney(double rem) {
    elektros = elektros - rem;
}
//method to get the amount of money the user has
double Player::getElektros() const {
    return elektros;
}
//method to add powerplants to the user
void Player::setAmountPowerPlants(int n) {
    amountPowerPlants = amountPowerPlants + n;
}
//method to get the amount of plants the user has
int Player::getAmountPowerPlants() const {
    return amountPowerPlants;
}

//setter and getter to how many cities each player has powered
int Player::getCitiesPowered() const {
    return citiesPowered;
}

void Player::setCitiesPowered(int citiesPowered) {
    this->citiesPowered = citiesPowered;
}

bool Player::getTurn(){
    return endturn;
}

 void Player::turn(){
     if(endturn==true){
         endturn= false; //if player clicks on endturn button the value is changed to true, which makes him unable to add cities
     }else
         endturn= true;
 }

 void Player::setTurn(){
     endturn=true;
 }
 void  Player::addCitiesPowered(){
     citiesPowered++;
 }
 int Player::getNumTurns() const{
     return totTurns;
 }
 void Player::incrTurn(){
     totTurns++;
 }

 bool Player::isCity1() const {
     return city1;
 }

 void Player::setCity1(bool city1) {
     this->city1 = city1;
 }

 bool Player::isCity10() const {
     return city10;
 }

 void Player::setCity10(bool city10) {
     this->city10 = city10;
 }

 bool Player::isCity11() const {
     return city11;
 }

 void Player::setCity11(bool city11) {
     this->city11 = city11;
 }

 bool Player::isCity12() const {
     return city12;
 }

 void Player::setCity12(bool city12) {
     this->city12 = city12;
 }

 bool Player::isCity13() const {
     return city13;
 }

 void Player::setCity13(bool city13) {
     this->city13 = city13;
 }

 bool Player::isCity14() const {
     return city14;
 }

 void Player::setCity14(bool city14) {
     this->city14 = city14;
 }

 bool Player::isCity15() const {
     return city15;
 }

 void Player::setCity15(bool city15) {
     this->city15 = city15;
 }

 bool Player::isCity16() const {
     return city16;
 }

 void Player::setCity16(bool city16) {
     this->city16 = city16;
 }

 bool Player::isCity17() const {
     return city17;
 }

 void Player::setCity17(bool city17) {
     this->city17 = city17;
 }

 bool Player::isCity18() const {
     return city18;
 }

 void Player::setCity18(bool city18) {
     this->city18 = city18;
 }

 bool Player::isCity19() const {
     return city19;
 }

 void Player::setCity19(bool city19) {
     this->city19 = city19;
 }

 bool Player::isCity2() const {
     return city2;
 }

 void Player::setCity2(bool city2) {
     this->city2 = city2;
 }

 bool Player::isCity20() const {
     return city20;
 }

 void Player::setCity20(bool city20) {
     this->city20 = city20;
 }

 bool Player::isCity21() const {
     return city21;
 }

 void Player::setCity21(bool city21) {
     this->city21 = city21;
 }

 bool Player::isCity22() const {
     return city22;
 }

 void Player::setCity22(bool city22) {
     this->city22 = city22;
 }

 bool Player::isCity23() const {
     return city23;
 }

 void Player::setCity23(bool city23) {
     this->city23 = city23;
 }

 bool Player::isCity24() const {
     return city24;
 }

 void Player::setCity24(bool city24) {
     this->city24 = city24;
 }

 bool Player::isCity25() const {
     return city25;
 }

 void Player::setCity25(bool city25) {
     this->city25 = city25;
 }

 bool Player::isCity26() const {
     return city26;
 }

 void Player::setCity26(bool city26) {
     this->city26 = city26;
 }

 bool Player::isCity27() const {
     return city27;
 }

 void Player::setCity27(bool city27) {
     this->city27 = city27;
 }

 bool Player::isCity28() const {
     return city28;
 }

 void Player::setCity28(bool city28) {
     this->city28 = city28;
 }

 bool Player::isCity29() const {
     return city29;
 }

 void Player::setCity29(bool city29) {
     this->city29 = city29;
 }

 bool Player::isCity3() const {
     return city3;
 }

 void Player::setCity3(bool city3) {
     this->city3 = city3;
 }

 bool Player::isCity30() const {
     return city30;
 }

 void Player::setCity30(bool city30) {
     this->city30 = city30;
 }

 bool Player::isCity31() const {
     return city31;
 }

 void Player::setCity31(bool city31) {
     this->city31 = city31;
 }

 bool Player::isCity32() const {
     return city32;
 }

 void Player::setCity32(bool city32) {
     this->city32 = city32;
 }

 bool Player::isCity33() const {
     return city33;
 }

 void Player::setCity33(bool city33) {
     this->city33 = city33;
 }

 bool Player::isCity34() const {
     return city34;
 }

 void Player::setCity34(bool city34) {
     this->city34 = city34;
 }

 bool Player::isCity35() const {
     return city35;
 }

 void Player::setCity35(bool city35) {
     this->city35 = city35;
 }

 bool Player::isCity36() const {
     return city36;
 }

 void Player::setCity36(bool city36) {
     this->city36 = city36;
 }

 bool Player::isCity37() const {
     return city37;
 }

 void Player::setCity37(bool city37) {
     this->city37 = city37;
 }

 bool Player::isCity38() const {
     return city38;
 }

 void Player::setCity38(bool city38) {
     this->city38 = city38;
 }

 bool Player::isCity39() const {
     return city39;
 }

 void Player::setCity39(bool city39) {
     this->city39 = city39;
 }

 bool Player::isCity4() const {
     return city4;
 }

 void Player::setCity4(bool city4) {
     this->city4 = city4;
 }

 bool Player::isCity40() const {
     return city40;
 }

 void Player::setCity40(bool city40) {
     this->city40 = city40;
 }

 bool Player::isCity41() const {
     return city41;
 }

 void Player::setCity41(bool city41) {
     this->city41 = city41;
 }

 bool Player::isCity42() const {
     return city42;
 }

 void Player::setCity42(bool city42) {
     this->city42 = city42;
 }

 bool Player::isCity5() const {
     return city5;
 }

 void Player::setCity5(bool city5) {
     this->city5 = city5;
 }

 bool Player::isCity6() const {
     return city6;
 }

 void Player::setCity6(bool city6) {
     this->city6 = city6;
 }

 bool Player::isCity7() const {
     return city7;
 }

 void Player::setCity7(bool city7) {
     this->city7 = city7;
 }

 bool Player::isCity8() const {
     return city8;
 }

 void Player::setCity8(bool city8) {
     this->city8 = city8;
 }

 bool Player::isCity9() const {
     return city9;
 }

 void Player::setCity9(bool city9) {
     this->city9 = city9;
 }

