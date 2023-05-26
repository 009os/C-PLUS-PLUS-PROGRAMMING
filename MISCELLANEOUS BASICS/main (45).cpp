#include <iostream>
using namespace std;

int main()
{
    int n,N,number=0,n1;
    cout<<"ENTER how many digits number you want to reverse :";
    cin>>N;
    cout<<"ENTER your number:";
    cin>>n;
  
    while(n!=0)
    {
        n1=n%10;
        number=number+n1;
        n = n/10;
        
    }
    
    cout<<number;
   
 return 0;
}

