#include <iostream>
using namespace std;
int main()
{
    int*p_number{};
    double*p_fractional_number{};
    int*p_fractional_number1{nullptr};
    
    cout<<" size of (int) : "<<sizeof(int)<<endl;
    cout<<" size of (double) : "<<sizeof(double)<<endl;
    cout<<" size of (double*) : "<<sizeof(double*)<<endl;
    cout<<" size of (int*) : "<<sizeof(int*)<<endl;
    cout<<" size of (p_number) : "<<sizeof(p_number)<<endl;
    cout<<" size of (p_fractional_number) : "<<sizeof(p_fractional_number)<<endl;
    cout<<" size of (p_fractional_number{nullptr}) : "<<sizeof(p_fractional_number1)<<endl;
    
    return 0;
}
