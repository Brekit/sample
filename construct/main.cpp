#include <iostream>
#include "game.h"

using namespace std;

// void game::display() {
//
//   cout << this->name << endl;
//   cout << this->cat << endl;
//   cout << this->price << endl;
//   cout << this->studio << endl;
//
// }

int main() {

  game fortnite("fortnite","rpg",35,"epic");
  game fifa("fifa","sports",50,"EA");


  fortnite.display();
  fifa.display();
}
