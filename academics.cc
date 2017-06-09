#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "academics.h"
using namespace std;

void osap::changestatus(){
  mortgaged = !mortgaged;
}

void slc::changestatus(){
  mortgaged = !mortgaged;
}

void ml::changestatus(){
  mortgaged = !mortgaged;
}

void tuition::changestatus(){
  mortgaged = !mortgaged;
}

void mkv::changestatus(){
  mortgaged = !mortgaged;
}

void ech::changestatus(){
  mortgaged = !mortgaged;
}

void needles::changestatus(){
  mortgaged = !mortgaged;
}

void pas::changestatus(){
  mortgaged = !mortgaged;
}

void hh::changestatus(){
  mortgaged = !mortgaged;
}

void dctims::changestatus(){
  mortgaged = !mortgaged;
}

void rch::changestatus(){
  mortgaged = !mortgaged;
}

void pac::changestatus(){
  mortgaged = !mortgaged;
}

void dwe::changestatus(){
  mortgaged = !mortgaged;
}

void cph::changestatus(){
  mortgaged = !mortgaged;
}

void uwp::changestatus(){
  mortgaged = !mortgaged;
}

void lhi::changestatus(){
  mortgaged = !mortgaged;
}

void slc2::changestatus(){
  mortgaged = !mortgaged;
}

void bmh::changestatus(){
  mortgaged = !mortgaged;
}

void opt::changestatus(){
  mortgaged = !mortgaged;
}

void goose::changestatus(){
  mortgaged = !mortgaged;
}

void ev1::changestatus(){
  mortgaged = !mortgaged;
}

void ev2::changestatus(){
  mortgaged = !mortgaged;
}

void ev3::changestatus(){
  mortgaged = !mortgaged;
}

void needles2::changestatus(){
  mortgaged = !mortgaged;
}

void v1::changestatus(){
  mortgaged = !mortgaged;
}

void phys::changestatus(){
  mortgaged = !mortgaged;
}

void b1::changestatus(){
  mortgaged = !mortgaged;
}

void cif::changestatus(){
  mortgaged = !mortgaged;
}

void b2::changestatus(){
  mortgaged = !mortgaged;
}

void gotims::changestatus(){
  mortgaged = !mortgaged;
}

void eit::changestatus(){
  mortgaged = !mortgaged;
}

void esc::changestatus(){
  mortgaged = !mortgaged;
}

void slc3::changestatus(){
  mortgaged = !mortgaged;
}

void c2::changestatus(){
  mortgaged = !mortgaged;
}

void rev::changestatus(){
  mortgaged = !mortgaged;
}

void needles3::changestatus(){
  mortgaged = !mortgaged;
}

void mc::changestatus(){
  mortgaged = !mortgaged;
}
void al::changestatus(){
  mortgaged = !mortgaged;
}
void coop::changestatus(){
  mortgaged = !mortgaged;
}
void dc::changestatus(){
  mortgaged = !mortgaged;
}

int osap::gettuition(){
  return 0;
}

int slc::gettuition(){
  return 0;
}

int coop::gettuition(){
  return 0;
}

int slc2::gettuition(){
  return 0;
}

int slc3::gettuition(){
  return 0;
}

int needles::gettuition(){
  return 0;
}

int needles2::gettuition(){
  return 0;
}

int needles3::gettuition(){
  return 0;
}

int gotims::gettuition(){
  return 0;
}

int dctims::gettuition(){
  return 0;
}

int goose::gettuition(){
  return 0;
}

int tuition::gettuition(){
  return 0;
}

int al::gettuition(){
  return tuition_price[improvement_num];
}

int ml::gettuition(){
  return tuition_price[improvement_num];
}
int ech::gettuition(){
  return tuition_price[improvement_num];
}

int pas::gettuition(){
  return tuition_price[improvement_num];
}


int hh::gettuition(){
  return tuition_price[improvement_num];
}


int rch::gettuition(){
  return tuition_price[improvement_num];
}


int dwe::gettuition(){
  return tuition_price[improvement_num];
}


int cph::gettuition(){
  return tuition_price[improvement_num];
}


int lhi::gettuition(){
  return tuition_price[improvement_num];
}


int bmh::gettuition(){
  return tuition_price[improvement_num];
}


int opt::gettuition(){
  return tuition_price[improvement_num];
}


int ev1::gettuition(){
  return tuition_price[improvement_num];
}


int ev2::gettuition(){
  return tuition_price[improvement_num];
}


int ev3::gettuition(){
  return tuition_price[improvement_num];
}


int phys::gettuition(){
  return tuition_price[improvement_num];
}


int b1::gettuition(){
  return tuition_price[improvement_num];
}


int b2::gettuition(){
  return tuition_price[improvement_num];
}


int eit::gettuition(){
  return tuition_price[improvement_num];
}


int esc::gettuition(){
  return tuition_price[improvement_num];
}


int c2::gettuition(){
  return tuition_price[improvement_num];
}


int mc::gettuition(){
  return tuition_price[improvement_num];
}


int dc::gettuition(){
  return tuition_price[improvement_num];
}


int mkv::gettuition(){
  return tuition_price[0];
}

int uwp::gettuition(){
  return tuition_price[0];
}

int v1::gettuition(){
  return tuition_price[0];
}

int rev::gettuition(){
  return tuition_price[0];
}

int pac::gettuition(){
  return tuition_price[0];
}

int cif::gettuition(){
  return tuition_price[0];
}


int needles::getposn(){
  return position;
}
int dctims::getposn(){
  return position;
}
rch::~rch(){}

int slc::getpurchase(){
  return 0;
}
int osap::getpurchase(){return 0;
}

int tuition::getpurchase(){return 0;}

bool al::ownable(){
  return true;
}
bool ml::ownable(){
  return true;
}
bool mkv::ownable(){
  return true;
}
bool ech::ownable(){
  return true;
}
bool tuition::ownable(){
  return false;
}
bool slc::ownable(){
  return false;
}
bool osap::ownable(){
  return false;
}
bool al::checkbuy(){
  return bought;
}
void al::changebuy(){
  bought = !bought;
}
bool ml::checkbuy(){
  return bought;
}
void ml::changebuy(){
  bought = !bought;
}
bool mkv::checkbuy(){
  return bought;
}
void mkv::changebuy(){
  bought = !bought;
}
bool ech::checkbuy(){
  return bought;
}
void ech::changebuy(){
  bought = !bought;
}
bool tuition::checkbuy(){
  return true;
}
bool osap::checkbuy(){
  return true;
}
bool slc::checkbuy(){
  return true;
}
void tuition::changebuy(){}
void slc::changebuy(){}
void osap::changebuy(){}

bool al::getstatus(){
  return mortgaged;
}
bool osap::getstatus(){
  return false;
}
bool slc::getstatus(){
  return false;
}
bool ml::getstatus(){
  return mortgaged;
}
bool tuition::getstatus(){
  return false;
}
bool mkv::getstatus(){
  return mortgaged;
}
bool needles::getstatus(){
  return false;
}
bool ech::getstatus(){
  return mortgaged;
}
string al::getname(){
  return "AL";
}
string osap::getname(){
  return "OSAP";
}
string slc::getname(){
  return "SLC";
}
string ml::getname(){
  return "ML";
}
string tuition::getname(){
  return "TUITION";
}
string mkv::getname(){
  return "MKV";
}
string ech::getname(){
  return "ECH";
}
int osap::getstand_row(){
  cerr << "osap row" << endl;
  return stand_row;
}

int slc::getstand_row(){
  cerr <<"slc row" << endl;
  return stand_row;
}

int ml::getstand_row(){
  cerr << "ml row" << endl;
  return stand_row;
}

int tuition::getstand_row(){
  cerr << "tuition row" << endl;
  return stand_row;
}

int mkv::getstand_row(){
  cerr << "mkv row" << endl;
  return stand_row;
}

int ech::getstand_row(){
  cerr << "ech row" << endl;
  return stand_row;
}

void osap::givestands(char name){
  stands.emplace_back(name);
}

void al::givestands(char name){
  stands.emplace_back(name);
}
void slc::givestands(char name){
  stands.emplace_back(name);
}
void ml::givestands(char name){
  stands.emplace_back(name);
}
void tuition::givestands(char name){
  stands.emplace_back(name);
}
void mkv::givestands(char name){
  stands.emplace_back(name);
}
void ech::givestands(char name){
  stands.emplace_back(name);
}

int osap::getstand_col(){
  int num = stands.size()-1;
  cout << "osap col" << stand_col[num] << endl;
  return stand_col[num];
}

int needles::getstand_col(){
  int num = stands.size()-1;
  return stand_col[num];
}
int needles::getpurchase(){
  return 0;
}
void needles::givestands(char name){
  stands.emplace_back(name);
}
int needles::getstand_row(){
  return stand_row;
}
int al::getstand_col(){
  int num = stands.size()-1;
  cout << "al col" << stand_col[num] << endl;
  return stand_col[num];
}
int dctims::getstand_col(){
  int num = stands.size()-1;
  return stand_col[num];
}
void dctims::givestands(char name){
  stands.emplace_back(name);
}
int dctims::getstand_row(){
  return stand_row;
}
int slc::getstand_col(){
  int num = stands.size() -1;
  cout << "slc col " << stand_col[num] << endl;
  return stand_col[num];
}
int ml::getstand_col(){
  int num = stands.size() -1 ;
  cout << "ml col" << stand_col[num] << endl;
  return stand_col[num];
}
// player before the current player has already been initialized, now the size is the current player number standing on this square 
int tuition::getstand_col(){
  int num = stands.size() -1;
  cout << "tuition col" << stand_col[num] << endl;
  return stand_col[num];
}
int mkv::getstand_col(){
  int num = stands.size() -1;
  cout << "mkv col" << stand_col[num] << endl;
  return stand_col[num];
}
int ech::getstand_col(){
  int num = stands.size() -1;
  cout << "ech col" << stand_col[num] << endl;
  return stand_col[num];
}

al::al():position{1}, mortgaged{false}, purchase{40}, improvement_cost{50}, improvement_num{0},  stand_row{54}{
  tuition_price.emplace_back(2);
  tuition_price.emplace_back(10);
  tuition_price.emplace_back(30);
  tuition_price.emplace_back(90);
  tuition_price.emplace_back(160);
  tuition_price.emplace_back(250);
  //row 52 for improvement
  //col 74 forimprovement
  for(int i = 0; i <5; i++){
    improvement_col.emplace_back(73+i);
  }
  //row 55 for standing
  //col 74 for improvement
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(73+i);
  }
}


al::~al(){}

int al::getpurchase(){
  return purchase;
}

int al::getimprovement_cost(){
  return improvement_cost;
}
int al::getimprovement_num(){
  return improvement_num;
}

int al::getposn(){
  return position;
}
int al::getstand_row(){
  cerr << "al row" << endl;
  return stand_row;
}

int slc::getposn(){
  return position;
}

slc::slc():position{2}, stand_row{54}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(65+i);
  }
}

ml::ml():position{3}, mortgaged{false}, purchase{60}, improvement_cost{50},improvement_num{0}, improvement_row{52}, stand_row{54}{
  tuition_price.emplace_back(4);
  tuition_price.emplace_back(20);
  tuition_price.emplace_back(60);
  tuition_price.emplace_back(180);
  tuition_price.emplace_back(320);
  tuition_price.emplace_back(450);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(57+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(57+i);
  }
}

ml::~ml(){
}


int ml::getpurchase(){
  return purchase;
}

int ml::getimprovement_cost(){
  return improvement_cost;
}
int ml::getimprovement_num(){
  return improvement_num;
}

int ml::getposn(){
  return position;
}


tuition::tuition():position{4},stand_row{54}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(49+i);
  }
}

int tuition::getposn(){
  return position;
}

mkv::mkv():position{5}, purchase{200}, mortgaged{false},stand_row{54}{
   for(int i = 0; i < 7; i++){
     stand_col.emplace_back(41+i);
   }
  tuition_price.emplace_back(25);
  tuition_price.emplace_back(50);
  tuition_price.emplace_back(100);
  tuition_price.emplace_back(200);
 }

 
mkv::~mkv(){
}

int mkv::getpurchase(){
  return purchase;
}

int mkv::getposn(){
  return position;
}


ech::ech():position{6}, purchase{100}, improvement_cost{50}, improvement_num{0}, mortgaged{false},stand_row{54}{
  tuition_price.emplace_back(6);
  tuition_price.emplace_back(30);
  tuition_price.emplace_back(90);
  tuition_price.emplace_back(270);
  tuition_price.emplace_back(400);
  tuition_price.emplace_back(550);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(33+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(33+i);
  }
}

 
ech::~ech(){
}

int ech::getpurchase(){
  return purchase;
}

int ech::getimprovement_cost(){
  return improvement_cost;
}
int ech::getimprovement_num(){
  return improvement_num;
}

int ech::getposn(){
  return position;
}

int osap::getposn(){
  return position;
}

osap::osap(): position{0}, stand_row{54}{
   for(int i = 0; i < 7; i++){
    stand_col.emplace_back(80+i);
  }
}

//ownable::~ownable(){}

needles::needles(): position{7}, stand_row{54}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(25+i);
  }
}
bool needles::ownable(){
  return false;
}
bool needles::checkbuy(){
  return true;
}
void needles::changebuy(){}

string needles::getname() {
  string s = "NEEDLES HALL";
  return s;
}

dctims::dctims(): position{10}, stand_row{54}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}
bool dctims::ownable(){
  return false;
}
bool dctims::checkbuy(){
  return true;
}
void dctims::changebuy(){}
string dctims::getname(){
  string s = "DC Tims Line";
  return s;
}

int dctims::getpurchase(){
  return 0;
}

bool dctims::getstatus(){
  return true;
}


bool pas::ownable(){
  return true;
}

bool pas::checkbuy(){
  return bought;
}
void pas::changebuy(){
  bought = !bought;
}

bool pas::getstatus(){
  return mortgaged;
}

string pas::getname(){
  return "PAS";
}

int pas::getstand_row(){
  return stand_row;
}

void pas::givestands(char name){
  stands.emplace_back(name);
}

int pas::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

pas::pas():position{8}, purchase{100}, improvement_cost{50}, improvement_num{0}, mortgaged{false},stand_row{54}{
  tuition_price.emplace_back(6);
  tuition_price.emplace_back(30);
  tuition_price.emplace_back(90);
  tuition_price.emplace_back(270);
  tuition_price.emplace_back(400);
  tuition_price.emplace_back(550);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(17+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(17+i);
  }
}

int pas::getpurchase(){
  return purchase;
}

int pas::getimprovement_cost(){
  return improvement_cost;
}
int pas::getimprovement_num(){
  return improvement_num;
}

int pas::getposn(){
  return position;
}


bool hh::ownable(){
  return true;
}

bool hh::checkbuy(){
  return bought;
}
void hh::changebuy(){
  bought = !bought;
}

bool hh::getstatus(){
  return mortgaged;
}

string hh::getname(){
  return "HH";
}

int hh::getstand_row(){
  return stand_row;
}

void hh::givestands(char name){
  stands.emplace_back(name);
}

int hh::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

hh::hh():position{9}, purchase{120}, improvement_cost{50}, improvement_num{0}, mortgaged{false},stand_row{54}{
  tuition_price.emplace_back(8);
  tuition_price.emplace_back(40);
  tuition_price.emplace_back(100);
  tuition_price.emplace_back(300);
  tuition_price.emplace_back(450);
  tuition_price.emplace_back(600);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(9+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(9+i);
  }
}

int hh::getpurchase(){
  return purchase;
}

int hh::getimprovement_cost(){
  return improvement_cost;
}
int hh::getimprovement_num(){
  return improvement_num;
}

int hh::getposn(){
  return position;
}


bool rch::ownable(){
  return true;
}

bool rch::checkbuy(){
  return bought;
}
void rch::changebuy(){
  bought = !bought;
}

bool rch::getstatus(){
  return mortgaged;
}

string rch::getname(){
  return "RCH";
}

int rch::getstand_row(){
  return stand_row;
}

void rch::givestands(char name){
  stands.emplace_back(name);
}

int rch::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

rch::rch():position{11}, purchase{140}, improvement_cost{100}, improvement_num{0}, mortgaged{false},stand_row{50}{
  tuition_price.emplace_back(10);
  tuition_price.emplace_back(50);
  tuition_price.emplace_back(150);
  tuition_price.emplace_back(450);
  tuition_price.emplace_back(625);
  tuition_price.emplace_back(750);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(1+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}

int rch::getpurchase(){
  return purchase;
}

int rch::getimprovement_cost(){
  return improvement_cost;
}
int rch::getimprovement_num(){
  return improvement_num;
}

int rch::getposn(){
  return position;
}


bool pac::ownable(){
  return true;
}
bool pac::checkbuy(){
  return bought;
}
void pac::changebuy(){
  bought = !bought;
}
bool pac::getstatus(){
  return mortgaged;
}
string pac::getname(){
  return "PAC";
}

int pac::getstand_row(){
  return stand_row;
}

void pac::givestands(char name){
  stands.emplace_back(name);
}
int pac::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

pac::pac():position{12}, purchase{150}, mortgaged{false},stand_row{42}{
   for(int i = 0; i < 7; i++){
     stand_col.emplace_back(1+i);
   }
  tuition_price.emplace_back(0);
// tuition not initialized yet
 }


pac::~pac(){
}

int pac::getpurchase(){
  return purchase;
}

int pac::getposn(){
  return position;
}


bool dwe::ownable(){
  return true;
}

bool dwe::checkbuy(){
  return bought;
}
void dwe::changebuy(){
  bought = !bought;
}

bool dwe::getstatus(){
  return mortgaged;
}

string dwe::getname(){
  return "DWE";
}

int dwe::getstand_row(){
  return stand_row;
}

void dwe::givestands(char name){
  stands.emplace_back(name);
}

int dwe::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

dwe::dwe():position{13}, purchase{140}, improvement_cost{100}, improvement_num{0}, mortgaged{false},stand_row{39}{
  tuition_price.emplace_back(10);
  tuition_price.emplace_back(50);
  tuition_price.emplace_back(150);
  tuition_price.emplace_back(450);
  tuition_price.emplace_back(625);
  tuition_price.emplace_back(750);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(1+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}

int dwe::getpurchase(){
  return purchase;
}

int dwe::getimprovement_cost(){
  return improvement_cost;
}
int dwe::getimprovement_num(){
  return improvement_num;
}

int dwe::getposn(){
  return position;
}


bool cph::ownable(){
  return true;
}

bool cph::checkbuy(){
  return bought;
}
void cph::changebuy(){
  bought = !bought;
}

bool cph::getstatus(){
  return mortgaged;
}

string cph::getname(){
  return "CPH";
}

int cph::getstand_row(){
  return stand_row;
}

void cph::givestands(char name){
  stands.emplace_back(name);
}

int cph::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

cph::cph():position{14}, purchase{160}, improvement_cost{100}, improvement_num{0}, mortgaged{false},stand_row{34}{
  tuition_price.emplace_back(12);
  tuition_price.emplace_back(60);
  tuition_price.emplace_back(180);
  tuition_price.emplace_back(500);
  tuition_price.emplace_back(700);
  tuition_price.emplace_back(900);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(1+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}

int cph::getpurchase(){
  return purchase;
}

int cph::getimprovement_cost(){
  return improvement_cost;
}
int cph::getimprovement_num(){
  return improvement_num;
}

int cph::getposn(){
  return position;
}


bool lhi::ownable(){
  return true;
}

bool lhi::checkbuy(){
  return bought;
}
void lhi::changebuy(){
  bought = !bought;
}

bool lhi::getstatus(){
  return mortgaged;
}

string lhi::getname(){
  return "LHI";
}

int lhi::getstand_row(){
  return stand_row;
}

void lhi::givestands(char name){
  stands.emplace_back(name);
}

int lhi::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

lhi::lhi():position{16}, purchase{180}, improvement_cost{100}, improvement_num{0}, mortgaged{false},stand_row{24}{
  tuition_price.emplace_back(14);
  tuition_price.emplace_back(70);
  tuition_price.emplace_back(200);
  tuition_price.emplace_back(550);
  tuition_price.emplace_back(750);
  tuition_price.emplace_back(950);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(1+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}

int lhi::getpurchase(){
  return purchase;
}

int lhi::getimprovement_cost(){
  return improvement_cost;
}
int lhi::getimprovement_num(){
  return improvement_num;
}

int lhi::getposn(){
  return position;
}



bool bmh::ownable(){
  return true;
}

bool bmh::checkbuy(){
  return bought;
}
void bmh::changebuy(){
  bought = !bought;
}

bool bmh::getstatus(){
  return mortgaged;
}

string bmh::getname(){
  return "BMH";
}

int bmh::getstand_row(){
  return stand_row;
}

void bmh::givestands(char name){
  stands.emplace_back(name);
}

int bmh::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

bmh::bmh():position{18}, purchase{180}, improvement_cost{100}, improvement_num{0}, mortgaged{false},stand_row{14}{
  tuition_price.emplace_back(14);
  tuition_price.emplace_back(70);
  tuition_price.emplace_back(200);
  tuition_price.emplace_back(550);
  tuition_price.emplace_back(750);
  tuition_price.emplace_back(950);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(1+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}

int bmh::getpurchase(){
  return purchase;
}

int bmh::getimprovement_cost(){
  return improvement_cost;
}
int bmh::getimprovement_num(){
  return improvement_num;
}

int bmh::getposn(){
  return position;
}


bool opt::ownable(){
  return true;
}

bool opt::checkbuy(){
  return bought;
}
void opt::changebuy(){
  bought = !bought;
}

bool opt::getstatus(){
  return mortgaged;
}

string opt::getname(){
  return "OPT";
}

int opt::getstand_row(){
  return stand_row;
}

void opt::givestands(char name){
  stands.emplace_back(name);
}

int opt::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

opt::opt():position{19}, purchase{200}, improvement_cost{100}, improvement_num{0}, mortgaged{false},stand_row{9}{
  tuition_price.emplace_back(16);
  tuition_price.emplace_back(80);
  tuition_price.emplace_back(220);
  tuition_price.emplace_back(600);
  tuition_price.emplace_back(800);
  tuition_price.emplace_back(1000);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(1+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}

int opt::getpurchase(){
  return purchase;
}

int opt::getimprovement_cost(){
  return improvement_cost;
}
int opt::getimprovement_num(){
  return improvement_num;
}

int opt::getposn(){
  return position;
}

opt::~opt(){}
bmh::~bmh(){}
lhi::~lhi(){}
cph::~cph(){}
dwe::~dwe(){}


bool uwp::ownable(){
  return true;
}
bool uwp::checkbuy(){
  return bought;
}
void uwp::changebuy(){
  bought = !bought;
}
bool uwp::getstatus(){
  return mortgaged;
}
string uwp::getname(){
  return "UWP";
}

int uwp::getstand_row(){
  return stand_row;
}

void uwp::givestands(char name){
  stands.emplace_back(name);
}
int uwp::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

uwp::uwp():position{15}, purchase{200}, mortgaged{false},stand_row{27}{
   for(int i = 0; i < 7; i++){
     stand_col.emplace_back(1+i);
   }
  tuition_price.emplace_back(25);
  tuition_price.emplace_back(50);
  tuition_price.emplace_back(100);
  tuition_price.emplace_back(200);
// tuition not initialized yet
 }


uwp::~uwp(){
}

int uwp::getpurchase(){
  return purchase;
}

int uwp::getposn(){
  return position;
}

int goose::getpurchase(){
  return 0;
}
bool goose::ownable(){
  return false;
}
bool goose::checkbuy(){
  return true;
}
void goose::changebuy(){}

bool goose::getstatus(){
  return false;
}

string goose::getname(){
  string s = "Goose Nesting";
  return s;
}

int goose::getstand_row(){
  return stand_row;
}

void goose::givestands(char name){
  stands.emplace_back(name);
}

int goose::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

int goose::getposn(){
  return position;
}

goose::goose():position{20}, stand_row{4}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}


int slc2::getpurchase(){
  return 0;
}
bool slc2::ownable(){
  return false;
}
bool slc2::checkbuy(){
  return true;
}
void slc2::changebuy(){}

bool slc2::getstatus(){
  return false;
}

string slc2::getname(){
  string s = "SLC";
  return s;
}

int slc2::getstand_row(){
  return stand_row;
}

void slc2::givestands(char name){
  stands.emplace_back(name);
}

int slc2::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

int slc2::getposn(){
  return position;
}

slc2::slc2():position{17}, stand_row{17}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(1+i);
  }
}


bool ev1::ownable(){
  return true;
}

bool ev1::checkbuy(){
  return bought;
}
void ev1::changebuy(){
  bought = !bought;
}

bool ev1::getstatus(){
  return mortgaged;
}

string ev1::getname(){
  return "EV1";
}

int ev1::getstand_row(){
  return stand_row;
}

void ev1::givestands(char name){
  stands.emplace_back(name);
}

int ev1::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

ev1::ev1():position{21}, purchase{220}, improvement_cost{150}, improvement_num{0}, mortgaged{false},stand_row{4}{
  tuition_price.emplace_back(18);
  tuition_price.emplace_back(90);
  tuition_price.emplace_back(250);
  tuition_price.emplace_back(700);
  tuition_price.emplace_back(875);
  tuition_price.emplace_back(1050);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(9+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(9+i);
  }
}

int ev1::getpurchase(){
  return purchase;
}

int ev1::getimprovement_cost(){
  return improvement_cost;
}
int ev1::getimprovement_num(){
  return improvement_num;
}

int ev1::getposn(){
  return position;
}

ev1::~ev1(){}


bool ev2::ownable(){
  return true;
}

bool ev2::checkbuy(){
  return bought;
}
void ev2::changebuy(){
  bought = !bought;
}

bool ev2::getstatus(){
  return mortgaged;
}

string ev2::getname(){
  return "EV2";
}

int ev2::getstand_row(){
  return stand_row;
}

void ev2::givestands(char name){
  stands.emplace_back(name);
}

int ev2::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

ev2::ev2():position{23}, purchase{220}, improvement_cost{150}, improvement_num{0}, mortgaged{false},stand_row{4}{
  tuition_price.emplace_back(18);
  tuition_price.emplace_back(90);
  tuition_price.emplace_back(250);
  tuition_price.emplace_back(700);
  tuition_price.emplace_back(875);
  tuition_price.emplace_back(1050);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(25+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(25+i);
  }
}

int ev2::getpurchase(){
  return purchase;
}

int ev2::getimprovement_cost(){
  return improvement_cost;
}
int ev2::getimprovement_num(){
  return improvement_num;
}

int ev2::getposn(){
  return position;
}

ev2::~ev2(){}


bool ev3::ownable(){
  return true;
}

bool ev3::checkbuy(){
  return bought;
}
void ev3::changebuy(){
  bought = !bought;
}

bool ev3::getstatus(){
  return mortgaged;
}

string ev3::getname(){
  return "EV3";
}

int ev3::getstand_row(){
  return stand_row;
}

void ev3::givestands(char name){
  stands.emplace_back(name);
}

int ev3::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

ev3::ev3():position{24}, purchase{240}, improvement_cost{150}, improvement_num{0}, mortgaged{false},stand_row{4}{
  tuition_price.emplace_back(20);
  tuition_price.emplace_back(100);
  tuition_price.emplace_back(300);
  tuition_price.emplace_back(750);
  tuition_price.emplace_back(925);
  tuition_price.emplace_back(1100);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(33+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(33+i);
  }
}

int ev3::getpurchase(){
  return purchase;
}

int ev3::getimprovement_cost(){
  return improvement_cost;
}
int ev3::getimprovement_num(){
  return improvement_num;
}

int ev3::getposn(){
  return position;
}

ev3::~ev3(){}


bool phys::ownable(){
  return true;
}

bool phys::checkbuy(){
  return bought;
}
void phys::changebuy(){
  bought = !bought;
}

bool phys::getstatus(){
  return mortgaged;
}

string phys::getname(){
  return "PHYS";
}

int phys::getstand_row(){
  return stand_row;
}

void phys::givestands(char name){
  stands.emplace_back(name);
}

int phys::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

phys::phys():position{26}, purchase{260}, improvement_cost{150}, improvement_num{0}, mortgaged{false},stand_row{4}{
  tuition_price.emplace_back(22);
  tuition_price.emplace_back(110);
  tuition_price.emplace_back(330);
  tuition_price.emplace_back(800);
  tuition_price.emplace_back(975);
  tuition_price.emplace_back(1150);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(49+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(49+i);
  }
}

int phys::getpurchase(){
  return purchase;
}

int phys::getimprovement_cost(){
  return improvement_cost;
}
int phys::getimprovement_num(){
  return improvement_num;
}

int phys::getposn(){
  return position;
}

phys::~phys(){}


bool b1::ownable(){
  return true;
}

bool b1::checkbuy(){
  return bought;
}
void b1::changebuy(){
  bought = !bought;
}

bool b1::getstatus(){
  return mortgaged;
}

string b1::getname(){
  return "B1";
}

int b1::getstand_row(){
  return stand_row;
}

void b1::givestands(char name){
  stands.emplace_back(name);
}

int b1::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

b1::b1():position{27}, purchase{260}, improvement_cost{150}, improvement_num{0}, mortgaged{false},stand_row{4}{
  tuition_price.emplace_back(22);
  tuition_price.emplace_back(110);
  tuition_price.emplace_back(330);
  tuition_price.emplace_back(800);
  tuition_price.emplace_back(975);
  tuition_price.emplace_back(1150);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(57+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(57+i);
  }
}

int b1::getpurchase(){
  return purchase;
}

int b1::getimprovement_cost(){
  return improvement_cost;
}
int b1::getimprovement_num(){
  return improvement_num;
}

int b1::getposn(){
  return position;
}

b1::~b1(){}

bool b2::ownable(){
  return true;
}

bool b2::checkbuy(){
  return bought;
}
void b2::changebuy(){
  bought = !bought;
}

bool b2::getstatus(){
  return mortgaged;
}

string b2::getname(){
  return "B2";
}

int b2::getstand_row(){
  return stand_row;
}

void b2::givestands(char name){
  stands.emplace_back(name);
}

int b2::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

b2::b2():position{29}, purchase{280}, improvement_cost{150}, improvement_num{0}, mortgaged{false},stand_row{4}{
  tuition_price.emplace_back(24);
  tuition_price.emplace_back(120);
  tuition_price.emplace_back(360);
  tuition_price.emplace_back(850);
  tuition_price.emplace_back(1025);
  tuition_price.emplace_back(1200);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(73+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(73+i);
  }
}

int b2::getpurchase(){
  return purchase;
}

int b2::getimprovement_cost(){
  return improvement_cost;
}
int b2::getimprovement_num(){
  return improvement_num;
}

int b2::getposn(){
  return position;
}

b2::~b2(){}


bool eit::ownable(){
  return true;
}

bool eit::checkbuy(){
  return bought;
}
void eit::changebuy(){
  bought = !bought;
}

bool eit::getstatus(){
  return mortgaged;
}

string eit::getname(){
  return "EIT";
}

int eit::getstand_row(){
  return stand_row;
}

void eit::givestands(char name){
  stands.emplace_back(name);
}

int eit::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

eit::eit():position{31}, purchase{300}, improvement_cost{200}, improvement_num{0}, mortgaged{false},stand_row{9}{
  tuition_price.emplace_back(26);
  tuition_price.emplace_back(130);
  tuition_price.emplace_back(390);
  tuition_price.emplace_back(900);
  tuition_price.emplace_back(1100);
  tuition_price.emplace_back(1275);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(81+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

int eit::getpurchase(){
  return purchase;
}

int eit::getimprovement_cost(){
  return improvement_cost;
}
int eit::getimprovement_num(){
  return improvement_num;
}

int eit::getposn(){
  return position;
}

eit::~eit(){}


bool esc::ownable(){
  return true;
}

bool esc::checkbuy(){
  return bought;
}
void esc::changebuy(){
  bought = !bought;
}

bool esc::getstatus(){
  return mortgaged;
}

string esc::getname(){
  return "ESC";
}

int esc::getstand_row(){
  return stand_row;
}

void esc::givestands(char name){
  stands.emplace_back(name);
}

int esc::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

esc::esc():position{32}, purchase{300}, improvement_cost{200}, improvement_num{0}, mortgaged{false},stand_row{14}{
  tuition_price.emplace_back(26);
  tuition_price.emplace_back(130);
  tuition_price.emplace_back(390);
  tuition_price.emplace_back(900);
  tuition_price.emplace_back(1100);
  tuition_price.emplace_back(1275);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(81+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

int esc::getpurchase(){
  return purchase;
}

int esc::getimprovement_cost(){
  return improvement_cost;
}
int esc::getimprovement_num(){
  return improvement_num;
}

int esc::getposn(){
  return position;
}

esc::~esc(){}


bool c2::ownable(){
  return true;
}

bool c2::checkbuy(){
  return bought;
}
void c2::changebuy(){
  bought = !bought;
}

bool c2::getstatus(){
  return mortgaged;
}

string c2::getname(){
  return "C2";
}

int c2::getstand_row(){
  return stand_row;
}

void c2::givestands(char name){
  stands.emplace_back(name);
}

int c2::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

c2::c2():position{34}, purchase{320}, improvement_cost{200}, improvement_num{0}, mortgaged{false},stand_row{24}{
  tuition_price.emplace_back(28);
  tuition_price.emplace_back(150);
  tuition_price.emplace_back(450);
  tuition_price.emplace_back(1000);
  tuition_price.emplace_back(1200);
  tuition_price.emplace_back(1400);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(81+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

int c2::getpurchase(){
  return purchase;
}

int c2::getimprovement_cost(){
  return improvement_cost;
}
int c2::getimprovement_num(){
  return improvement_num;
}

int c2::getposn(){
  return position;
}

c2::~c2(){}


bool mc::ownable(){
  return true;
}

bool mc::checkbuy(){
  return bought;
}
void mc::changebuy(){
  bought = !bought;
}

bool mc::getstatus(){
  return mortgaged;
}

string mc::getname(){
  return "MC";
}

int mc::getstand_row(){
  return stand_row;
}

void mc::givestands(char name){
  stands.emplace_back(name);
}

int mc::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

mc::mc():position{37}, purchase{350}, improvement_cost{200}, improvement_num{0}, mortgaged{false},stand_row{39}{
  tuition_price.emplace_back(35);
  tuition_price.emplace_back(175);
  tuition_price.emplace_back(500);
  tuition_price.emplace_back(1100);
  tuition_price.emplace_back(1300);
  tuition_price.emplace_back(1500);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(81+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

int mc::getpurchase(){
  return purchase;
}

int mc::getimprovement_cost(){
  return improvement_cost;
}
int mc::getimprovement_num(){
  return improvement_num;
}

int mc::getposn(){
  return position;
}

mc::~mc(){}


bool dc::ownable(){
  return true;
}

bool dc::checkbuy(){
  return bought;
}
void dc::changebuy(){
  bought = !bought;
}

bool dc::getstatus(){
  return mortgaged;
}

string dc::getname(){
  return "DC";
}

int dc::getstand_row(){
  return stand_row;
}

void dc::givestands(char name){
  stands.emplace_back(name);
}

int dc::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

dc::dc():position{39}, purchase{400}, improvement_cost{200}, improvement_num{0}, mortgaged{false},stand_row{50}{
  tuition_price.emplace_back(50);
  tuition_price.emplace_back(200);
  tuition_price.emplace_back(600);
  tuition_price.emplace_back(1400);
  tuition_price.emplace_back(1700);
  tuition_price.emplace_back(2000);
  for(int i = 0; i < 5; i ++){
    improvement_col.emplace_back(81+i);
  }
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

int dc::getpurchase(){
  return purchase;
}

int dc::getimprovement_cost(){
  return improvement_cost;
}
int dc::getimprovement_num(){
  return improvement_num;
}

int dc::getposn(){
  return position;
}

dc::~dc(){}


int slc3::getpurchase(){
  return 0;
}
bool slc3::ownable(){
  return false;
}
bool slc3::checkbuy(){
  return true;
}
void slc3::changebuy(){}

bool slc3::getstatus(){
  return false;
}

string slc3::getname(){
  string s = "SLC";
  return s;
}

int slc3::getstand_row(){
  return stand_row;
}

void slc3::givestands(char name){
  stands.emplace_back(name);
}

int slc3::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

int slc3::getposn(){
  return position;
}

slc3::slc3():position{33}, stand_row{17}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}


int needles2::getpurchase(){
  return 0;
}
bool needles2::ownable(){
  return false;
}
bool needles2::checkbuy(){
  return true;
}
void needles2::changebuy(){}

bool needles2::getstatus(){
  return false;
}

string needles2::getname(){
  string s = "Needles Hall";
  return s;
}

int needles2::getstand_row(){
  return stand_row;
}

void needles2::givestands(char name){
  stands.emplace_back(name);
}

int needles2::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

int needles2::getposn(){
  return position;
}

needles2::needles2():position{22}, stand_row{4}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(17+i);
  }
}

int gotims::getpurchase(){
  return 0;
}
bool gotims::ownable(){
  return false;
}
bool gotims::checkbuy(){
  return true;
}
void gotims::changebuy(){}

bool gotims::getstatus(){
  return false;
}

string gotims::getname(){
  string s = "Go To Tims";
  return s;
}

int gotims::getstand_row(){
  return stand_row;
}

void gotims::givestands(char name){
  stands.emplace_back(name);
}

int gotims::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

int gotims::getposn(){
  return position;
}

gotims::gotims():position{30}, stand_row{4}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

int needles3::getpurchase(){
  return 0;
}
bool needles3::ownable(){
  return false;
}
bool needles3::checkbuy(){
  return true;
}
void needles3::changebuy(){}

bool needles3::getstatus(){
  return false;
}

string needles3::getname(){
  string s = "Needles Hall";
  return s;
}

int needles3::getstand_row(){
  return stand_row;
}

void needles3::givestands(char name){
  stands.emplace_back(name);
}

int needles3::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

int needles3::getposn(){
  return position;
}

needles3::needles3():position{36}, stand_row{35}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

int coop::getpurchase(){
  return 0;
}
bool coop::ownable(){
  return false;
}
bool coop::checkbuy(){
  return true;
}
void coop::changebuy(){}

bool coop::getstatus(){
  return false;
}

string coop::getname(){
  string s = "Coop Fee";
  return s;
}

int coop::getstand_row(){
  return stand_row;
}

void coop::givestands(char name){
  stands.emplace_back(name);
}

int coop::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

int coop::getposn(){
  return position;
}

coop::coop():position{38}, stand_row{43}{
  for(int i = 0; i < 7; i++){
    stand_col.emplace_back(81+i);
  }
}

bool v1::ownable(){
  return true;
}
bool v1::checkbuy(){
  return bought;
}
void v1::changebuy(){
  bought = !bought;
}
bool v1::getstatus(){
  return mortgaged;
}
string v1::getname(){
  return "V1";
}

int v1::getstand_row(){
  return stand_row;
}

void v1::givestands(char name){
  stands.emplace_back(name);
}
int v1::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

v1::v1():position{25}, purchase{200}, mortgaged{false},stand_row{4}{
   for(int i = 0; i < 7; i++){
     stand_col.emplace_back(41+i);
   }
  tuition_price.emplace_back(25);
  tuition_price.emplace_back(50);
  tuition_price.emplace_back(100);
  tuition_price.emplace_back(200);
// tuition not initialized yet
 }


v1::~v1(){
}

int v1::getpurchase(){
  return purchase;
}

int v1::getposn(){
  return position;
}

bool rev::ownable(){
  return true;
}
bool rev::checkbuy(){
  return bought;
}
void rev::changebuy(){
  bought = !bought;
}
bool rev::getstatus(){
  return mortgaged;
}
string rev::getname(){
  return "REV";
}

int rev::getstand_row(){
  return stand_row;
}

void rev::givestands(char name){
  stands.emplace_back(name);
}
int rev::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

rev::rev():position{35}, purchase{200}, mortgaged{false},stand_row{27}{
   for(int i = 0; i < 7; i++){
     stand_col.emplace_back(81+i);
   }
  tuition_price.emplace_back(25);
  tuition_price.emplace_back(50);
  tuition_price.emplace_back(100);
  tuition_price.emplace_back(200);
// tuition not initialized yet
 }


rev::~rev(){
}

int rev::getpurchase(){
  return purchase;
}

int rev::getposn(){
  return position;
}


bool cif::ownable(){
  return true;
}
bool cif::checkbuy(){
  return bought;
}
void cif::changebuy(){
  bought = !bought;
}
bool cif::getstatus(){
  return mortgaged;
}
string cif::getname(){
  return "CIF";
}

int cif::getstand_row(){
  return stand_row;
}

void cif::givestands(char name){
  stands.emplace_back(name);
}
int cif::getstand_col(){
  int num = stands.size() -1;
  return stand_col[num];
}

cif::cif():position{28}, purchase{150}, mortgaged{false},stand_row{4}{
   for(int i = 0; i < 7; i++){
     stand_col.emplace_back(65+i);
   }
  tuition_price.emplace_back(0);
// tuition not initialized yet
 }


cif::~cif(){
}

int cif::getpurchase(){
  return purchase;
}

int cif::getposn(){
  return position;
}

