#include <iostream>
using namespace std;
int main()
{

int a,b;
cout<<"enter a : ";
cin>>a;
cout<<endl<<"enter b : ";
cin>>b;
cout<<endl;

bool result =(a<b);
cout<<boolalpha<<"result :   ";
if(result == true){
    cout<<a<<" is less than "<<b<<endl;
    }
if(result==false){
    cout<<a<<" is not less than  "<<b<<endl;
}

return 0;
}

