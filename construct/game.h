#include <iostream>
#include <string>

using namespace std;


class  game {
public:
  string name;
  string cat;
  int price;
  string studio;

  game(string a, string b, int c, string d){
    name=a;
    cat=b;
    price=c;
    studio=d;
  }

  

  void display(void);
};
