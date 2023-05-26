
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int age;
    string full_name;
    cout<<" Please type in here your full name and age"<<endl;
    getline(cin,full_name);
    
    cin>>age;
    cout<<" hello "<<full_name<< " you are "<<age<<" years old ";

    return 0;
}

