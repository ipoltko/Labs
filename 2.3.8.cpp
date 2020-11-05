#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;
int main() {
long n, f = 1, i = 1;

cout << "Enter a number to find its factorial: " <<endl;

cin >> n;

   for(int i=1;i<=n;i++)

    {

        f = f * i;

    }
    cout << "Factorial of " << n << ": " << f <<endl;
}