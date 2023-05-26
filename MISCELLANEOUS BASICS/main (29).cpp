#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int pos_num{34};
 int neg_num{-45};
 
 cout<<" pos_num : "<<pos_num<<endl;
 cout<<" neg_num : "<<neg_num<<endl;
 
 cout<<showpos;
 cout<<" pos_num : "<<pos_num<<endl;
 cout<<" neg_num : "<<neg_num<<endl;
 
cout<<noshowpos;
cout<<" pos_num : "<<pos_num<<endl;
cout<<" neg_num : "<<neg_num<<endl;

return 0;
}

