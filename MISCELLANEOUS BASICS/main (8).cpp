#include<iostream>
using namespace std;
int main()
{int i;

    for(size_t{0};i<100;++i)
    {try{int*data = new int[100000000];}
        catch(exception& ex)
        
        {cout<<"program not ending well ! "<<ex.what()<<endl;}
}
cout<<"program ending well ! "<<endl;
return 0;
}
