#include <iostream>

using namespace std;


struct Date {
  int day;
  int month;
  int year;

   set(int x, int y, int z);
 void display(void);
// Date(){
//    cout << this->day;
//    cout << this->month;
//    cout << this->year;
// };
};

int Date::set(int x, int y, int z) {
  day = x;
  month = y;
  year = z;

}

int main() {
  Date today;
  today.set(10,15,1996);
}
