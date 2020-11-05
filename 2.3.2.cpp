#include <iostream>

using namespace std;

int main(void) {
double pi4 = 0.;
long n;
double frac = 1;
cout << "Number of iterations? ";
cin >> n;
pi4 = 1;

for(int i = 1; i <= n; i ++){
  if (i % 2){
  frac+= 2;
  pi4-= (1/frac);
}else if(i % 2 == 0){
  frac+= 2;
  pi4+= (1/frac);
}
}

cout.precision(20);
cout << "Pi = " << (pi4 * 4.) << endl;
return 0;
}