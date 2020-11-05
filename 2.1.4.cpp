#include <iostream>
using namespace std;
int main() {
  int year;
  int month;
  int day;
  cout<< "Enter a year: ";
  cin>> year;
  cout<< "Enter a month: ";
  cin>> month;
  cout<< "Enter a day: ";
  cin>> day;
  month -= 2;
  if (month <= 0){
    month += 12;
    year -= 1;
  }
  month = (month * 83)/32;
  month += day;
  month += year;
  month += (year/4);
  month -= (year/100);
  month += (year/400);
  month = month % 7;
  string dayName;
  switch (month){
  case 1: dayName = "Monday";break;
  case 2: dayName = "Tuesday";break;
  case 3: dayName = "Wednesday";break;
  case 4: dayName = "Thursday";break;
  case 5: dayName = "Friday";break;
  case 6: dayName = "Saturday";break;
  case 0: dayName = "Sunday";break;

  }
  cout<<"This is "<<dayName<<endl;
  cout<< month;
}