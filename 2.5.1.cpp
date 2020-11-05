#include <iostream>
using namespace std;

int
main ()
{
  
int type, j = 0;
  
float v1, v2, out;
  
  do
    {
      
cout << "MENU:\n" 
	"0 - exit\n" << 
"1 - addition \n" << 
"2 - subtraction \n" <<
	
"3 - multiplication \n" << 
"4 - division \n ";
      
 
cin >> type;
      
 
if (type == 0)
	{
	  
j = 1;
	
}
      
 
if (type == 1)
	{
	  
cout << "Enter the first number you would like to add: " << endl;
	  
cin >> v1;
	  
cout << "Enter the second number you would like to add: " << endl;
	  
cin >> v2;
	  
out = v1 + v2;
	  
cout << "Answer is: " << out << endl;
	
 
}
      
if (type == 2)
	{
	  
cout << "Enter the first number: " << endl;
	  
cin >> v1;
	  
cout <<
	    "Enter the second number you would like to subtract from the first: "
	    << endl;
	  
cin >> v2;
	  
out = v1 - v2;
	  
cout << "Answer is: " << out << endl;
	
 
}
      
if (type == 3)
	{
	  
cout << "Enter the first number: " << endl;
	  
cin >> v1;
	  
cout <<
	    "Enter the second number you would like to multiply to the first: "
	    << endl;
	  
cin >> v2;
	  
out = v1 * v2;
	  
cout << "Answer is: " << out << endl;
	
 
}
      
if (type == 4)
	{
	  
cout << "Enter the first number: " << endl;
	  
cin >> v1;
	  
cout <<
	    "Enter the second number you would like to divide the first by: "
	    << endl;
	  
cin >> v2;
	  
out = v1 / v2;
	  
 
if (v2 == 0)
	    {
	      
cout << "You can not divide by 0." << endl;
	    
}
	  
if (v2 != 0)
	    
cout << "Answer is: " << out << endl;
	
}
    
 
}
  while (j == 0);
  
cout << "Calculator Ended" << endl;

}
