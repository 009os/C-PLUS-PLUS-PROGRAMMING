#include<iostream>
using namespace std;

int sum(int a, int b)
{ 
  int result = a + b;
 cout<<" in : &result (int) "<<&result<<endl;
 return result;
    
}
 
 int main(){
     int x{5};
     int y{89};
      
     int result = sum(x,y);
     cout<<" out : &result (int) "<<&result<<endl;
     cout<<"result "<<result;
     return 0;
 }
