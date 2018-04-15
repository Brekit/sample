#include <iostream>
#include <string>
#include "game.h"

using namespace std;


void game::display() {

  cout << this->name << endl;
  cout << this->cat << endl;
  cout << this->price << endl;
  cout << this->studio << endl;
  cout << endl;

}
