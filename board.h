#ifndef _BOARD_H_
#define _BOARD_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <map>
class square;
class textdisplay;
class player;

class board {
//  public:
  //int initr;
  //int initc;
  int playernum;
  std::vector <std::string> snames;
  std::vector <player *> players;
  std::vector <std::vector <char>> grid;
  std::vector<square *>squares;
  int currentplayer_index;
  std::map <char,std::string> playerdetail; //string is grid name, char is player name
  std::map <std::string, char> griddetail;
  int row; // grid total rows
  int col; //grid total cols
  public:
  int thislandprice(int squareposn);
  bool thismorstatus(int squareposn);
  int thissquareposn(std::string s);
  void changemorstatus(int i); // squares[i] change that mortgage status
  bool getmorstatus(); // get mortgage status of current standing square
  bool belong(std::string s); // string s is the name of the square
  std::string landname(int i); // 
  int landtuition();
  int landprice(int i); // price of the land which players[i] is standing on
  std::string currentsquare();
  int currentsquareposn();
  int findplayerposn(char name);
  int buy_house(int i);
  char currentname();
  void reinit(int r, int c);
  bool checkownable(int i);
  bool checkbought(int i);
  void rolldice(int posn);
  void giveplayer(char name, board *b);
  void init(int r, int c, char name); // for walking initialization of the board
  void show_assets(); // show the player asset
  void show_all(); // show everyone assets
  void printdice(int i); // print dice condition, can roll or not
  void set_currentplayerindex(int n); // change current player index
  void playerreduce(int i, int p); //reduce players[i] by p amount
  void playerincrease(int i, int p); // see above
  ~board();
  board();
  char checksquare(int squareposn);
  char checkowner(int playerposn);
  void prettyprint();
  void printcurrentposn();
  void notifyboard(int posn, char name);
  void reset(int i);
  bool checknext(int i);
  void message(std::string s);
  int winauction(int posn, int amount, int coord);
  void printbalance(int i);
};

#endif
