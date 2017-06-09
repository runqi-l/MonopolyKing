#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <vector>
#include "board.h"
#include "observer.h"
#include "player.h"
#include <map>
//#include "textdisplay.h"
#include "academics.h"
using namespace std;

bool playerexist(vector <char> names, char name){
  for(int i = 0; i < names.size(); i++){
    if (name == names[i]){
      return true;
    }
  }
  return false;
}

void printhelp(){
    ifstream file{"help"};
    string s;
    while(!file.eof()){
        getline(file,s);
        cout << s << endl;
    }
}

void auctionhelp(){
    ifstream file{"auction"};
    string s;
    while(!file.eof()){
        getline(file,s);
        cout << s << endl;
    }
}

int main(int argc, char *argv[]){
    //  board b;
    cout << "Welcome to Watopoly!" << endl;
    cout << "Please select the number of players (min 2, max 7):" << endl;
    int numplayer;
    // select number of players
    board *b = new board();
    //  b.init();
    while(true){
        if(!(cin >> numplayer) || numplayer < 2 || numplayer > 7){
            cout << "Incorrect input, min 2, max 7, please reenter:" << endl;
            cin.clear();
            cin.ignore();
        }
        else{
            cout << "You have selected "<< numplayer << " players." << endl;
            break;
        }
    }
    
    
    
    // select player characters
    string charactername = "choice: description\nG: Goose \nB: GRT Bus\nD: Tim Hortons Doughnut\nP: Professor\nS: Student\n$: Money\nL: Laptop\nT: Pink tie\n";
    char charname;
    vector <char> playernames;
    for(int i = 0; i < numplayer; i++){
        cout << "Please select your character:"<< endl;
        cout << "NOTE: turn order will follow the player creation order." << endl;
        cout << charactername;
        while(true){
            if(!(cin >> charname) ||
               (charname != 'G' && charname != 'B' &&
                charname != 'D' && charname != 'P' &&
                charname != 'S' && charname != '$' &&
                charname != 'L' && charname != 'T')){
                   cout << "Incorrect input, please reenter:" << endl;
                   cin.clear();
                   cin.ignore();
               }
            else{
                bool check = true;
                for(int i = 0; i < playernames.size(); i++){
                    if(charname == playernames[i]){
                        cout <<"Repeated player, please reenter:" << endl;
                        check = false;
                        cin.clear();
                        cin.ignore();
                    }
                }
                if(check){
                    cout << "You have selected player: " << charname << endl;
                    playernames.emplace_back(charname);
                    b->giveplayer(charname,b);
                    break;
                }
            }
        }
    }
    







    cout << "This is the current board:"<< endl;
    b->prettyprint();
   












    //set up finished, game start
    cout << "All the players are ready. Game start." << endl;
    // i denotes the index of the player
    while(playernames.size() > 1){
    










        // everytime all the players finish one turn, need to clean up the standing position
        for(int i = 0; i < playernames.size(); i++){
            cout << "It's now " << playernames[i] << "'s turn" << endl;
            string s;
            b->set_currentplayerindex(i);
            while(true){
                cout << "To see available options, please type <help>" << endl;
                if(! (cin >> s) || (s != "help" && s != "roll" && s != "next" && s != "escape" && s != "trade" && s != "improve" && s != "mortgage" && s != "unmortgage"&& s != "bankrupt" && s != "assets" && s != "all" && s != "save")){
                    cout << "Incorrect input, please reenter:" << endl;
                    cin.clear();
                    cin.ignore();
                }
      

                // all the commands
                else{
                
		  if(s == "help"){
                        printhelp();
                    }



                    else if(s == "improve"){
                        // improve the asset. check current position is owned by him or not
                        if(!b->checkownable(i)){
                            cout << "You cannot improve this place." << endl;
                            break;
                        }
                        else{
                            if(b->checkowner(i) != b->currentname()){
                                cout << "This place is not owned by you. You cannot improve it." << endl;
                            }
                        }
                    }
                  





                    else if(s == "roll"){
                        if(b->checknext(i)){
                            cout << "You have already rolled." << endl;
                        }
                        else{
                            b->rolldice(i);
                            b->prettyprint();
                            b->printcurrentposn();
                            b->printdice(i);
                            // up until this point, just go to the correct spot
                            if(b->checkownable(i)){
                                
                                
                                // the land has been bought by someone
                                if(b->checkbought(i)){
                                    
                                    if(b->checkowner(i) != b->currentname()){
				      // check mortgage status
				      if(b->getmorstatus()){
					cout << "This place is mortgaged. You don't need to pay the rent." << endl;
				      }
				      else{
                                        char owner = b->checkowner(i);
                                        int nowposn = b->findplayerposn(owner);
                                        cout << "The land has been bought." << endl;
                                        int pay = b->landtuition();
                                        cout << "Please pay the tuition: " << pay << endl;
                                        b->playerincrease(nowposn, pay);
                                        b->playerreduce(i,pay);
                                        b->printbalance(i);
				      }
                                    }
                                    else{// has already bought yourself
                                        cout << "You have bought this place." << endl;
                                    }
                                }
                                



                                // the land hasn't been bought by anyone
                                else{
                                    cout << "The land cost $" << b->landprice(i) <<". " << "Do you want to buy the land? (y/n)" << endl;
                                    string s;
                                    while(true){
                                        if(!(cin >> s) || (s != "y" && s != "n")){
                                            cout << "Incorrect input, please reenter:" << endl;
                                        }
                                        else{
                                            if(s == "n"){
                                                cout << "You chose not to buy the land" << endl;
                                                cout << "AUCTION activated==================================" << endl;
                                                int currentbid = 0;
                                                
                                                // initialize all things needed by the auction
                                                vector <char> auctionplayers(playernames);
                                                map <char, int> auctionbid;
                                                for(int i = 0; i < auctionplayers.size(); i++){
                                                    auctionbid[auctionplayers[i]] = 0;
                                                }
                                                
                                                while(auctionplayers.size() > 1){
                                                    for(int j = 0; j < auctionplayers.size() ; j++){
                                                        cout << auctionplayers[j] << "'s turn. What's your bid?" << endl;
                                                        string bid;
                                                        bool auc = true;
                                                        while(auc){
                                                            cout << "To see available options, please type <auction>" << endl;
                                                            if(!(cin >> bid) || (bid != "auction" && bid != "raise" && bid != "quit")){
                                                                cout << "Incorrect input, please reenter:" << endl;
                                                                cin.clear();
                                                                cin.ignore();
                                                            }
                                                            else{
                                                                if (bid == "auction"){
                                                                    auctionhelp();
                                                                }
                                                                if(bid == "quit"){
                                                                    auctionbid.erase(auctionplayers[j]);
                                                                    auctionplayers.erase(auctionplayers.begin()+j);
                                                                    auc = false;
                                                                    break;
                                                                }
                                                                if(bid == "raise"){
                                                                    int p;
                                                                    while(true){
                                                                        if(!(cin >> p) || p <= 0){
                                                                            cout << "Incorrect input, please reenter:" << endl;
                                                                            cin.clear();
                                                                            cin.ignore();
                                                                            break;
                                                                        }
                                                                        else{
                                                                            currentbid = currentbid + p;
                                                                            auctionbid[auctionplayers[j]] = p;
                                                                            cout << "You are willing to pay a total of $" << currentbid << " for the building" << endl;
                                                                            cout << "Auction continue" << endl;
                                                                            auc = false;
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                char bidwinner = auctionplayers[0];
                                                int getcurrposn; // the bid winner's posn in players
                                                for(int i = 0; i < playernames.size(); i++){
                                                    if(bidwinner == playernames[i]){
                                                        getcurrposn = i;
                                                        break;
                                                    }
                                                }
                                                // the coord of the won square 
                                                int coord = b->currentsquareposn();
                                                cout << bidwinner << "'s balance is " << b->winauction(getcurrposn, currentbid, coord) << endl;
                                                // call buy hourse. use map to find the player name; // have to initialize auction vector and map in the loop,
                                                // otherwise there will be only one auction
                                                break;
                                            }
                                            
                                            
                                            
                                            
                                            
                                            else{
                                                cout << "Your current balance is "<< b->buy_house(i) << endl;
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                            else{// the land is unownable
                            }
                        }
                    }
                    if(s == "next"){
                        if(b->checknext(i)){
                            b->reset(i);
                            break;
                        }
                        else{
                            cout << "You have not rolled. Please roll your dice before leave" << endl;
                        }
                    }
		    if(s == "mortgage"){
		      string s;
		      while(true){
			if(!(cin >> s) || !(b->belong(s))){
			  cout << "Incorrect input, please reenter:";
			  cin.clear();
			  cin.ignore();
			  break;
			}
			else{
			  int posn = b->thissquareposn(s);
			  if((b->checksquare(posn) == b->currentname()) && !b->thismorstatus(posn)){


			    // not i!!!price is not on i
			  int price = b->thislandprice(posn) / 2;// get the position price;
			  b->playerincrease(i,price);//call increase money, change mortgage status;
			  b->changemorstatus(posn);
			  b->printbalance(i);
			  break;
			  }
			  else{
			    if(b->checksquare(b->thissquareposn(s)) != b->currentname()){
			    cout << "This is not your land, you cannot mortgage it." << endl;
			    }
			    else{
			      cout << "The land has already been mortgaged." << endl;
			    }
			    break;
			  }
			}
		      }
		    }

		    if(s == "unmortgage"){
		      string s;
		      while(true){
			if(!(cin >> s) || !(b->belong(s))){
			  cout << "Incorrect input, please reenter:";
			  cin.clear();
			  cin.ignore();
			  break;
			}
			else{
			  int posn = b->thissquareposn(s);
			  if((b->checksquare(posn) == b->currentname()) && b->thismorstatus(posn)){
			    int price = b->thislandprice(posn) * 0.6;
			    b->playerreduce(i,price);
			    b->changemorstatus(posn);
			    b->printbalance(i);
			    break;
			  }
			  else{
			    if(b->checksquare(b->thissquareposn(s)) != b->currentname()){
			      cout << "This is not your land, you cannot unmortgage it." << endl;
			    }
			    else{
			      cout << "The land is not mortgaged." << endl;
			    }
			    break;
			  }
			}
		      }
		    }
/*
		    if(s == "trade"){
		      char s; //first arg name
		      while(true){
			if(!(cin >> s) || !(playerexist(playernames, s)) || (s == b->currentname())){
			  cout <<"Incorrect input, please reenter:";
			  cin.clear();
			  cin.ignore();
			  break;
			}
			else{// first arg is a player in the game
			  string c; // second arg building
			  if(!(cin >> c)){
			    cout << "Incorrect input, please reenter:"<< endl;
			    break;
			  }
			  int amount; // second arg amount
			  istringstream ss{c};
			  ss >> amount;
			  if(ss.fail()){// second arg is a building name
			    if(!(b->belong(c))){
			      cout << "Incorrect input, please reenter:"<< endl;
			      break;
			    }
			    else{
			      string d; // third arg building
			      if(!(cin >> d)){
				cout << "Incorrect input, please reenter:"<< endl;
				break;
			      }
			      int money; // third arg money
			      istringstream ss{d};
			      ss >> money;
			      if(ss.fail()){//third arg is a building name
				if(!(b->belong(d))){
				  cout <<"Incorrect input, please reenter:"<< endl;
				  break;
				}
				else{// still need to write a lot


				}}}
			  }
			  else{// when second is number, third should be building
			    string e;// building name
			    if(!(cin >> e) || !(b->belong(e))){
			      cout <<"Incorrect input, please reenter:" << endl;
			      break;
			    }
			    else{ // trade name amount building condition
			      // give name amount for a building
			      cout << "Player "<< s << "Are you willing to exchange your "<<e<< " with $"<< c << "?"<< endl;
			      string in;
			      while(true){
				if(!(cin >> in) || (in != "y" && in != "n")){
				  cout <<"Incorrect input, please reenter (y/n):" << endl;
				}
				else{
				  if(in == "n"){
				    cout << "You have decline the offer" << endl;
				    break;
				  }
				  else{
				    b->reset_details(,)}}}}}}}}

*/










				


			  






			    
                    if(s == "assets"){
                        b->show_assets();
                    }
                    if(s == "all"){
                        b->show_all();
                    }
                }
            }
        }
    }
}
