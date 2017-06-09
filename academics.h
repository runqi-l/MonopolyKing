#ifndef _ACADEMICS_H_
#define _ACADEMICS_H_
#include <iostream>
#include <vector>
#include "board.h"
#include "observer.h"
class square{
   public:
     virtual int getpurchase() = 0;// purchase price of the land
     virtual bool ownable() = 0;// whether this land can be owned by others
     virtual bool getstatus() = 0; // whether the land is being mortgaged
   virtual ~square() = default;
   virtual int getposn() = 0; // position of the square
   virtual int getstand_row() = 0; // stand row of the square for the current player
   virtual void givestands(char name) = 0; // standing people on the square
   virtual int getstand_col() = 0; // stand col of the square for the current player
   virtual std::string getname() = 0; // name of the square
   virtual bool checkbuy() = 0; // check whether the land is being bought by anyone
   virtual void changebuy() = 0; // change the bought status of the land
   virtual int gettuition() = 0;
   virtual void changestatus() =0;
};

class nonownable: public square{
};

class ownable: public square{
  public:
    virtual int getpurchase() = 0;
    virtual int getposn() = 0;
    virtual int gettuition() = 0;
};

class nonacademics: public ownable{
  public:
   virtual int getpurchase() = 0;
   virtual int getposn() = 0;
};

class academics: public ownable{
  public:
    virtual int getpurchase() = 0;
    virtual int getimprovement_cost() = 0;
    virtual int getposn() = 0;
    virtual int getimprovement_num() = 0;
};

class al: public academics{
  std::vector<char> stands;
  const int position; // index of al in the grid
  int purchase; // price for purchase one al
  int improvement_cost; // price for improvement
  int improvement_num;  // number of improvement on al
  bool mortgaged;  // whether this land is being bought;
  //int improvement_row;
  int stand_row;
  bool bought = false;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector <int> tuition_price; // different tuition when there is different number of improvements
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  int getstand_col() override;
  void givestands(char name) override;
  std::string getname() override;
  int getstand_row() override;
  al();
  ~al() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  bool getstatus() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};

class slc: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  slc();
};

class ml: public academics{
  const int position; // index of al in the grid
  int purchase; // price for purchase one al
  int improvement_cost; // price for improvement
  int improvement_num;  // number of improvement on al
  bool mortgaged;  // whether this land is being bought;
  int improvement_row;
  bool bought = false;
  std::vector<char> stands;
  int stand_row;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector <int> tuition_price; // different tuition when there is different number of improvements
  public:
  void changestatus() override;
  int gettuition() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  bool ownable() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_col() override;
  int getstand_row() override;
  //int stand_row;
  ml();
  ~ml() override;
  //void prettyprint() override;
  
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};

class tuition: public nonownable{
  const int position;
  int stand_row;
  std::vector<int> stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  tuition();
  int getposn() override;
  int getstand_row() override;
  int getstand_col() override;
  bool ownable() override;
  int getpurchase() override;
};

class mkv: public nonacademics{
  const int position;
  int purchase;
  bool mortgaged;
  bool bought = false;
  int stand_row;
  std::vector<char> stands;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_col() override;
  int getstand_row() override;
  //int stand_row;
  mkv();
  ~mkv() override;
  int getpurchase() override;
  int getposn() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};

class ech: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  ech();
  ~ech() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};

class osap: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  int getstand_col() override;
  int getpurchase() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  osap();
};

class needles: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  int getposn() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  int getstand_col() override;
  int getpurchase() override;
  void givestands(char name) override;
  int getstand_row() override;
  needles();
};

class dctims: public nonownable{
    const int position;
    int stand_row;
    std::vector<int>stand_col;
    std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
    int getposn() override;
    bool ownable() override;
    bool checkbuy() override;
    void changebuy() override;
    bool getstatus() override;
    std::string getname() override;
    int getstand_col() override;
    int getpurchase() override;
    void givestands(char name) override;
    int getstand_row() override;
    dctims();
};

class hh: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  hh();
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};
class pas: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  pas();
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};
 

class rch: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row; // changes every column class 50
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col; //starts from 1
  std::vector<int> stand_col; // starts from 1
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  rch();
  ~rch() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class pac: public nonacademics{
  const int position;
  int purchase;
  bool mortgaged;
  bool bought = false;
  int stand_row;
  std::vector<char> stands;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_col() override;
  int getstand_row() override;
  //int stand_row;
  pac();
  ~pac() override;
  int getpurchase() override;
  int getposn() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class dwe: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  dwe();
  ~dwe() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};

class cph: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  cph();
  ~cph() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class lhi: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  lhi();
  ~lhi() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class bmh: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  bmh();
  ~bmh() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class opt: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  opt();
  ~opt() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};



class uwp: public nonacademics{
  const int position;
  int purchase;
  bool mortgaged;
  bool bought = false;
  int stand_row;
  std::vector<char> stands;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_col() override;
  int getstand_row() override;
  //int stand_row;
  uwp();
  ~uwp() override;
  int getpurchase() override;
  int getposn() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};

class slc2: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  slc2();
};

class goose: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  goose();
};



class ev1: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  ev1();
  ~ev1() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class ev2: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  ev2();
  ~ev2() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class ev3: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  ev3();
  ~ev3() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class phys: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  phys();
  ~phys() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class b1: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  b1();
  ~b1() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class b2: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  b2();
  ~b2() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class eit: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  eit();
  ~eit() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class esc: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  esc();
  ~esc() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};



class c2: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  c2();
  ~c2() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class mc: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  mc();
  ~mc() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class dc: public academics{
  bool bought = false;
  const int position;
  int purchase;
  bool mortgaged;
  int stand_row;
  int improvement_cost;
  int improvement_num;
  std::vector <char> stands;
  std::vector<int> improvement_col;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getstand_col() override;
  bool checkbuy() override;
  void changebuy() override;
  dc();
  ~dc() override;
  int getpurchase() override;
  int getimprovement_cost() override;
  int getposn() override;
  int getimprovement_num() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};



class slc3: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  slc3();
};



class needles2: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  needles2();
};

class gotims: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  gotims();
};

class needles3: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  needles3();
};

class coop: public nonownable{
  const int position;
  int stand_row;
  std::vector<int>stand_col;
  std::vector<char> stands;
  bool mortgaged = true;
  public:
  void changestatus() override;
  int gettuition() override;
  std::string getname() override;
  int getstand_col() override;
  void givestands(char name) override;
  int getstand_row() override;
  int getposn() override;
  bool getstatus() override;// mortgaged or not
  bool checkbuy() override;
  void changebuy() override;
  int getpurchase() override;
  bool ownable() override;
  coop();
};


class v1: public nonacademics{
  const int position;
  int purchase;
  bool mortgaged;
  bool bought = false;
  int stand_row;
  std::vector<char> stands;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_col() override;
  int getstand_row() override;
  //int stand_row;
  v1();
  ~v1() override;
  int getpurchase() override;
  int getposn() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};

class rev: public nonacademics{
  const int position;
  int purchase;
  bool mortgaged;
  bool bought = false;
  int stand_row;
  std::vector<char> stands;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_col() override;
  int getstand_row() override;
  //int stand_row;
  rev();
  ~rev() override;
  int getpurchase() override;
  int getposn() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


class cif: public nonacademics{
  const int position;
  int purchase;
  bool mortgaged;
  bool bought = false;
  int stand_row;
  std::vector<char> stands;
  std::vector<int> stand_col;
  std::vector<int> tuition_price;
  public:
  void changestatus() override;
  int gettuition() override;
  bool ownable() override;
  bool checkbuy() override;
  void changebuy() override;
  bool getstatus() override;
  std::string getname() override;
  void givestands(char name) override;
  int getstand_col() override;
  int getstand_row() override;
  //int stand_row;
  cif();
  ~cif() override;
  int getpurchase() override;
  int getposn() override;
  //void notify(square &c) override;
  //SubscriptionType subType() override;
};


#endif
