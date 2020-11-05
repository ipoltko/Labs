#include <iostream>
using namespace std;
int
main (void)
{
  int n, s,c;
  cout << "Enter a positive integer value greater than 1 and less than 9" << endl;
  cin >> n;
  s = 1;
  c=1;
  if (n > 2 && n < 9)
    {
      for (int i = 0; i < (n - 1); i++)
	{
	  cout << ' ';
	  s++;
	}
      cout << '*';
      for (int i = 0; i < n - s; i++)
	{
	  cout << ' ';
	  s++;
	}
      cout << ' ' << endl;
      
      
     
      int s=c-1;
      int w=0;
      for (int i = 0; i < n -2; i++)
	{
	    
	     
	     int y=n-1;
	  for (int j = 0; j < n - c; j++){
	      
	   if(w%2==0){
	  for (int x = y+n; x-1 > n; x--){
	   cout <<'b';
	  }
	   cout << '*';
	  for (int x = 0; x < n-y; x++){
	      
	   cout <<'c';
	      
	  }
	  w++;
	   }
	   y--;
	   
	    cout << '*' << endl;
	  
	}
	 s--;
	    c--;
	  
	    }
	
	
	
	
	
	
	
	
      for (int i = 0; i < ((n * 2) - 1); i++)
	{
	  cout << '*';
	}
      return 0;
    }
  else
    cout << "Sorry, the side size is invalid" << endl;
}