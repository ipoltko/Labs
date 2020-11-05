#include <iostream>
using namespace std;
int main() {
long n;
cout << "Number of iterations? ";
cin >> n;

double a=1;
for(long s=1;s<=n;s++){
  a=a/2;
}
cout.precision(20);
cout << a << endl;
return 0;
}
