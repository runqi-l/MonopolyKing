#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <iostream>
#include <fstream>
#include <vector>
#include "board.h"

class player{
  board *b;
  char name;
  int position;
  int num1;
  int num2;
  int money;
  bool rolled; // check if the player has rolled his dice in this turn
  int old_row;
  int old_col;
  std::vector <int> square_asset;
  int count_double;
  public:
  void addmoney(int p);
  void boardmessage(int posn);
  int balance();// current balance of the player
  int getposn(); // current standing posn
  char getname(); // name of the player
  void reducemoney(int n); // reduce money by n amount
  player(char nick, board *b);
  bool checkroll(); // check if the player has rolled once
  int dice(); //give dice sum
  void setold(int r, int c); // to reinit old standing spot
  int getasset_size(); // number of assets player own
  int getasset_posn(int i);
  int get_dice1();
  int get_dice2();
  int get_oldr();
  int get_oldc();
  int getdouble();
  void notify_stand(int posn, char name);
  void addassets(int i);
  void changeroll();
//  void notify_asset(square q);
};

#endif

