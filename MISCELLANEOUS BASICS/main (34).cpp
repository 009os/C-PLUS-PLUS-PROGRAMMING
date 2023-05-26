#include <iostream>
using namespace std;

const int pen{10};
const int markar{20};
const int eraser{30};
const int rectangle{40};
const int circle{50};
const int ellipse{60};

int main()
{
int tool {eraser};
switch(tool)
{
    case pen :{cout<<"active tool is pen :";} break;
    case eraser :{cout<<"active tool is eraser :";} break;
    case markar :{cout<<"active tool is marker :";} break;
    case rectangle :{cout<<"active tool is rectangle :";} break;
    case circle :{cout<<"active tool is circle :";} break;
    case ellipse :{cout<<"active tool is ellipse :";} break;
    
    default :{
        cout<<" no match found";
    }
break;
}
cout<<" moving on --";
    
    return 0;
}


