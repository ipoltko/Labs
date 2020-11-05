#include <iostream>
using namespace std;
int main() {
  double number1= 0;
  double number2= 1;
  double answer = 1;
  int repeat;
  cout << "Enter a value: ";
  cin >> repeat;
  for (int i = 1; i < repeat; i++){
    answer = number1 + number2;
        number1 = number2;
        number2 = answer;
  }
  cout << answer;
}