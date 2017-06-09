#include "board.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "academics.h"
#include "player.h"
using namespace std;


board::board(): playernum{0},  currentplayer_index{0}{
// construct all the squares of the field squares
  osap *square0 = new osap();
  al * square1 = new al();
  slc *square2 = new slc();
  ml *square3 = new ml();
  tuition *square4 = new tuition();
  mkv *square5= new mkv();
  ech *square6 = new ech();
  needles *square7 = new needles();
  pas *square8 = new pas();
  hh *square9 = new hh();
  dctims *square10 = new dctims();
  rch *square11 = new rch();
  pac *square12 = new pac();
  dwe *square13 = new dwe();
  cph *square14 = new cph();
  uwp *square15 = new uwp();
  lhi *square16 = new lhi();
  slc2 *square17 = new slc2();
  bmh *square18 = new bmh();
  opt *square19 = new opt();
  goose *square20 = new goose();
  ev1 *square21 = new ev1();
  needles2 *square22 = new needles2();
  ev2 *square23 = new ev2();
  ev3 *square24 = new ev3();
  v1 *square25 = new v1();
  phys *square26 = new phys();
  b1 *square27 = new b1();
  cif *square28 = new cif();
  b2 *square29 = new b2();
  gotims *square30 = new gotims();
  eit *square31 = new eit();
  esc *square32 = new esc();
  slc *square33 = new slc();
  c2 *square34 = new c2();
  rev *square35 = new rev();
  needles3 *square36 = new needles3();
  mc *square37 = new mc();
  coop *square38 = new coop();
  dc *square39 = new dc();
  squares.emplace_back(square0);
  squares.emplace_back(square1);
  squares.emplace_back(square2);
  squares.emplace_back(square3);
  squares.emplace_back(square4);
  squares.emplace_back(square5);
  squares.emplace_back(square6);
  squares.emplace_back(square7);
  squares.emplace_back(square8);
  squares.emplace_back(square9);
  squares.emplace_back(square10);
  squares.emplace_back(square11);
  squares.emplace_back(square12);
  squares.emplace_back(square13);
  squares.emplace_back(square14);
  squares.emplace_back(square15);
  squares.emplace_back(square16);
  squares.emplace_back(square17);
  squares.emplace_back(square18);
  squares.emplace_back(square19);
  squares.emplace_back(square20);
  squares.emplace_back(square21);
  squares.emplace_back(square22);
  squares.emplace_back(square23);
  squares.emplace_back(square24);
  squares.emplace_back(square25);
  squares.emplace_back(square26);
  squares.emplace_back(square27);
  squares.emplace_back(square28);
  squares.emplace_back(square29);
  squares.emplace_back(square30);
  squares.emplace_back(square31);
  squares.emplace_back(square32);
  squares.emplace_back(square33);
  squares.emplace_back(square34);
  squares.emplace_back(square35);
  squares.emplace_back(square36);
  squares.emplace_back(square37);
  squares.emplace_back(square38);
  squares.emplace_back(square39);
  // read in default board
  ifstream file{"board"};
  string s;
  row = 0;
  while(getline(file,s)){
    col = s.length();
    vector <char> col;
    for(int i = 0; i < s.length(); i++){
      col.emplace_back(s[i]);
    }
    grid.emplace_back(col);
    ++row;
  }
  for(int i = 0; i < squares.size(); i++){
    snames.emplace_back(squares[i]->getname());
  }
}
int board::thislandprice(int squareposn){
  return squares[squareposn]->getpurchase();
}

bool board::belong(string s){
  for(int i = 0; i < snames.size(); i++){
    if(s == snames[i]){
      return true;
    }
  }
  return false;
}
bool board::thismorstatus(int squareposn){
  return squares[squareposn]->getstatus();
}
int board::thissquareposn(string s){
  for(int i = 0; i< snames.size(); i++){
    if(s == snames[i]){
      return i;
    }
  }
}
bool board::getmorstatus(){
  return squares[currentsquareposn()]->getstatus();
}

void board::changemorstatus(int i){
  squares[i] -> changestatus();
}

void board::playerreduce(int i, int p){
  players[i] -> reducemoney(p);
}

void board::playerincrease(int i, int p){
  players[i] ->addmoney(p);
}

char board::checksquare(int i){
  string s= squares[i]->getname();
  return griddetail[s];
}

void board::printdice(int i){
  cerr << "board printdice" << endl;
  int num1 = players[i]->get_dice1();
  int num2 = players[i]->get_dice2();
  cout << "You rolled a dice " << num1 << " and another dice " << num2 << endl;
  if(players[i]->getdouble() != 0){
    if(players[i]->getdouble() < 3){
    cout << "You rolled doubles, please roll again." << endl;
    }
    else{
      cout << "You cannot roll anymore." << endl;
    }
  }
}

int board::landtuition(){
  int posn = currentsquareposn();
  return squares[posn] -> gettuition();
}

int board::landprice(int i){
  int posn = players[i] -> getposn();
  return squares[posn]->getpurchase();
}
string board::landname(int i){
  return squares[i]->getname();
}

void board::printbalance(int i){
  int rest = players[i] -> balance();
  cout << "Your current balance is "<< rest << endl;
}

int board::buy_house(int i){
  int posn = players[i] -> getposn();
  int price = squares[posn]->getpurchase();
  squares[posn]->changebuy();
  players[i] -> reducemoney(price);
  players[i] -> addassets(posn);
  
  string name = landname(posn);// add to griddetail
  char play = players[i]->getname();
  playerdetail[play] = name;
  griddetail[name] = play;
  return players[i] -> balance();
}

char board::checkowner(int playerposn){
  int posn = players[playerposn]->getposn();
  string squarename = squares[posn]->getname();
  return griddetail[squarename];
}
  
int board::winauction(int posn, int amount, int coord){
  squares[coord]->changebuy();
  players[posn] -> reducemoney(amount);
  players[posn]-> addassets(coord);

  // add to griddetail
  string name = landname(coord);
  char play = players[posn] ->getname();
  playerdetail[play] = name;
  griddetail[name] = play;
  return players[posn] -> balance();
}
int board::findplayerposn(char name){
  for(int i = 0; i < players.size(); i++){
    if(players[i]->getname() == name){
      return i;
    }
  }
}
bool board::checkownable(int i){
  int posn = players[i]->getposn();
  return squares[posn]->ownable();
}

bool board::checkbought(int i){
  int posn = players[i] -> getposn();
  return squares[posn]->checkbuy();
}

void board::show_all(){
  int copy = currentplayer_index;
  for(int i = 0; i < players.size(); i++){
    currentplayer_index = i;
    show_assets();
    cout << "======================================" << endl;
  }
  set_currentplayerindex(copy);
}

void board::set_currentplayerindex(int n){
  currentplayer_index = n;
}

void board::show_assets(){
  int rest_money = players[currentplayer_index] -> balance();
  cout << players[currentplayer_index]->getname() << " balance is: " << rest_money << endl;
  cout << players[currentplayer_index]->getname() << " assets are: " << endl;
  int num = players[currentplayer_index]->getasset_size();
  for(int i = 0; i < num; i++){
    int posn = players[currentplayer_index]->getasset_posn(i);
    string name = squares[posn]->getname();
    cout << name << " ";
    bool check = squares[posn]->getstatus();
    if(check){
      cout << "mortgaged" << endl;
    }
    else{
      cout << "not mortgaged" << endl;
    }
  }
  if(num == 0){
    cout << "none" << endl;
  }
}

string board::currentsquare(){
  int posn = players[currentplayer_index] -> getposn();
  string name = squares[posn] -> getname();
  return name;
}

int board::currentsquareposn(){
  int posn = players[currentplayer_index] -> getposn();
  return posn;
}

void board::printcurrentposn(){
   cout << currentname() << " is on " << currentsquare() << endl;
}

char board::currentname(){
  return players[currentplayer_index] -> getname();
}

board::~board(){
}

void board::rolldice(int posn){
  cerr << "board rolldice" << endl;
  currentplayer_index = posn;
  players[posn]->dice();
}

void board::message(string s){
  cout << s << endl;
}
// construct the player in the board class, give initial position
void board::giveplayer(char name, board *b){
  player * play = new player(name,b);
  currentplayer_index = playernum;
  players.emplace_back(play);
  int r = play->get_oldr();
  int c = play->get_oldc();
  c = c + playernum;
  playernum++;
  play->setold(r,c);
  init(r,c,play->getname());
}

void board::reinit(int r, int c){
  cerr << "reinit" << endl;
  grid[r][c] = ' ';
  cout << grid[r][c] << endl;
}

void board::init(int r, int c, char name){
  cerr << "init" << endl;
  reinit(players[currentplayer_index]->get_oldr(), players[currentplayer_index]->get_oldc());
  players[currentplayer_index]->setold(r,c);
  grid[r][c] = name;
}

void board::prettyprint(){
  for (int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout << grid[i][j];
    }
    cout << endl;
  }
}

void board::notifyboard(int posn, char name){
  cerr << "board notifyboard" << endl;
  squares[posn]->givestands(name);
  int r = squares[posn]->getstand_row();
  int c = squares[posn]->getstand_col();
  init(r,c,name);
}

bool board::checknext(int i){
  cerr << "board checknext" << endl;
  return players[i]->checkroll();
}

void board::reset(int i){
  cerr<< "board reset" << endl;
  players[i]->changeroll();
}
