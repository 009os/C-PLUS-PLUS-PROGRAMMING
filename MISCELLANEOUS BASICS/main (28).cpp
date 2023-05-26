
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
   int col_width = 20;
    
    cout<<right;
    cout<<setw(col_width)<<" Last-Name "<<setw(col_width)<<" First-Name "<<endl<<endl;
    cout<<setw(col_width)<<" shukla "<<setw(col_width)<<" omji "<<endl;
    cout<<setw(col_width)<<" porwal "<<setw(col_width)<<" shashank "<<endl;
    cout<<setw(col_width)<<" vishnoi "<<setw(col_width)<<" piyush "<<endl;

    return 0;
}

