#include <iostream>
using namespace std;
int main() {
  int c0;
  int count = 0;
  cout << "Enter a number" << endl;
  cin >> c0;
  cout<<endl;
  while(c0 != 1 ){
    count = count + 1;
    if(( c0 % 2 ) == 0 ){
      c0 = (c0 / 2);
      cout << c0 << endl;
    }   
    else{
      c0 = ((c0 *3) + 1);
      cout << c0 << endl;
    }
  }
  cout << "Steps taken : " << count;
}