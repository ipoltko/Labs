#include <iostream> 
#include <cmath>
using namespace std;
int main(void){
  int n;
  cout<<"Enter a value: ";
  cin>>n;
  
  if(n <= 1 || n >= 10){
    cout<<"Number is <= 2 or Number is too big";
    
  }else{
    cout<< "+";
  for(int i = 2; i < n; i++){
    cout<<"-";
    
  }
     cout<<"+"<<endl;
     
     
    for(int i = 1; i < (n - 2) ; i++){
      
      cout<<"|";
    }
      for(int i = 0; i < (n - 2); i++){
        cout<<" ";
       cout<<"|";
       
       cout<<endl;
       
       
      }
      
      cout<<"+";
    
    for(int i = 2; i < n; i++){
      cout<< "-";
      
      
    }
    cout<<"+"<<endl;
    return 0;
  }
  
  
  
  
}