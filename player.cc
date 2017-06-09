#include <iostream>
#include "player.h"
#include <cstdlib>
#include <ctime>
#include "board.h"
using namespace std;

player::player(char nick, board *c):position{0},money{1500}, name{nick}, rolled{false}, old_row{54}, old_col{81}, b{c}, num1{0}, num2{0}, count_double{0}{
//  cout << "player ctor runs" << endl;
}
void player::changeroll(){
  cerr << "player changeroll" << endl;
  rolled = !rolled;
}

void player::addassets(int i){
  square_asset.emplace_back(i);
}
int player::balance(){
  return money;
}

void player::reducemoney(int n){
  money = money - n;
}

int player::getposn(){
  return position;
}

int player::getasset_size(){
  return square_asset.size();
}

int player::getasset_posn(int i){
  return square_asset[i];
}

void player::addmoney(int p){
  money += p;
}

int player::getdouble(){
  cerr << "player getdouble" << endl;
  return count_double;
}
int roll_dice(){
  int roll;
//  srand(time(NULL));
  roll = (rand()%6)+1;
  return roll;
}
int player::get_dice1(){
  return num1;
}
int player::get_dice2(){
  return num2;
}
int player::dice(){
  cerr << "player dice" << endl;
  rolled = true;
  int dice1 = roll_dice();
  int dice2 = roll_dice();
  num1 = dice1;
  num2 = dice2;
  int sum = dice1 + dice2;
  position = position + dice1 + dice2;
  if( position > 39){
    position = position - 40;
    money += 200;
    cout << "Collect $200 from OSAP" << endl;
  }
  if(dice1 == dice2){
    rolled = false;
    count_double++;
    if(count_double == 3){
      notify_stand(10,name);
      boardmessage(3);
      position = 10;
      return sum;
    }
    notify_stand(position,name);
    return sum;
  }
  count_double = 0;
  notify_stand(position,name);
  return sum;
}

void player::boardmessage(int posn){
  if(posn == 3){ // here 3 is count_double number
    string s = "Player is being set to DC Tims Line";
    b->message(s);
  }
  if(posn == 30){
    string s= "Player is being sent to DC Tims Line";
    b->message(s);
  }
  if(posn == 38){
    string s = "Pay $150 Coop Fee";
    b->message(s);
  }
}

char player::getname(){
  return name;
}

bool player:: checkroll(){
  cerr << "player checkroll" << endl;
  if(rolled == false && count_double < 3){
    return false;
  }
  else{
    count_double = 0;
    rolled = true;
    return true;
  }
}

void player::notify_stand(int posn, char name){
  if(posn == 30){ //go to tims
    boardmessage(30);
    notify_stand(10,name);
    count_double = 0;
  }
  if(posn == 38){// coop fee
    boardmessage(38);
    money -= 150;
  }
  cerr << "player notify_stand" << endl;
  b->notifyboard(posn,name);
}

void player::setold(int r, int c){
  old_row = r;
  old_col = c;
}

int player::get_oldr(){
  return old_row;
}

int player::get_oldc(){
  return old_col;
}
