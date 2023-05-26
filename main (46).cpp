#include <iostream>
using namespace std;

int main()
{
    int n,N,number=0;
    cout<<"ENTER how many digits number you want to reverse :";
    cin>>N;
    cout<<"ENTER your number:";
    cin>>n;
  
    while(n!=0)
    {
        number = number * 10;
        number = n % 10 + number;
        n = n/10;
    }
    
    cout<<number;
   
 return 0;
}


