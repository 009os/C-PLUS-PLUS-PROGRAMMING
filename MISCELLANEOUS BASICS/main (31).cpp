
#include <iostream>
using namespace std;

int main()
{
    short int a{10};
    short int b{20};
    
    char c{40};
    char d{59};
     cout<<" size of a : "<<sizeof(a)<<endl;
     cout<<" size of b : "<<sizeof(b)<<endl;
     cout<<" size of c : "<<sizeof(c)<<endl;
     cout<<" size of d : "<<sizeof(d)<<endl;
     
     auto result = a+b;
     auto result2 = c+d;
     cout<<" size of result : "<<sizeof(result)<<endl;
     cout<<" size of result 2 : "<<sizeof(result2)<<endl;
      
    return 0;
}

