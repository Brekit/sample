#include <iostream>

using namespace std;


struct Date {
  int day;
  int month;
  int year;

 void set(int x, int y, int z);
 void Display(void);
};

void Date::Display(void){
   cout << day << ".";
   cout << month<< ".";
   cout << year << endl;
}

void Date::set(int x, int y, int z) {
  day = x;
  month = y;
  year = z;
}

int main() {
  Date today;
  today.set(10,15,1996);
  today.Display();
  today.day++;
  today.Display();
}
