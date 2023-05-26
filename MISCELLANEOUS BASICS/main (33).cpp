
#include <iostream>

using namespace std;

int main()
{
    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};
    auto var6{123u};
    auto var7{123ul};
    auto var8{123ll};
    
    cout<<" var 1 occupies : "<<sizeof(var1)<<" bytes "<<endl;
    cout<<" var 2 occupies : "<<sizeof(var2)<<" bytes "<<endl;
    cout<<" var 3 occupies : "<<sizeof(var3)<<" bytes "<<endl;
    cout<<" var 4 occupies : "<<sizeof(var4)<<" bytes "<<endl;
    cout<<" var 5 occupies : "<<sizeof(var5)<<" bytes "<<endl;
    cout<<" var 6 occupies : "<<sizeof(var6)<<" bytes "<<endl;
    cout<<" var 7 occupies : "<<sizeof(var7)<<" bytes "<<endl;
    cout<<" var 8 occupies : "<<sizeof(var8)<<" bytes "<<endl;


    return 0;
}

