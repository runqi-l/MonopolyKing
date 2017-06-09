#include <vector>
#include <sstream>
#include <iostream>
#include <map>
using namespace std;

int main(){
  /*
  vector <int> num1;
  for(int i = 0; i < 5; i++){
    num1.emplace_back(i);
  }
  vector <int> num2(num1);
  for(int i = 0; i < num2.size(); i++){
    cout << num2[i] << endl;
  }
  */
  string s;
  /*
  while(true){
    if(! (cin >> bid)){

    }
    else{
      if(s == "help"){
	cout << "correct" << endl;
      }
      }
    }
    */
  /*
  while(true){
    getline(cin, s);
    if(s == "help"){
      cout << "correct" << endl;
    }
    else{
      int i;
      istringstream ss{s};
      if(!(ss >> i)){
	cout << "incorrect" << endl;
	ss.clear();
	ss.ignore();
      }
      else{
	cout << "correct" <<endl;
      }
    }
  }
  */
  /*
  vector <char> names;
  names.emplace_back('a');
  names.emplace_back('b');
  names.emplace_back('c');
  names.emplace_back('d');
  map <char, int> store;
  store[names[0]] = 0;
  store[names[1]] = 1;

  map<char, string> no;
  no['a'] = "abc";
  no['c'] = "dce";
  cout << no['a'] << endl;
  cout << no["dce"] << endl;
  */
  int i;
  if(!(cin >> s)){
    cin.clear();
    cin >> i;
    cout << i << endl;
  }
  else{
    cout << "string" << endl;
    istringstream ss{s};
    ss >> i;
    cout << i << endl;
    if(ss.fail()){
      cout << s << endl;
    }
  }
}

