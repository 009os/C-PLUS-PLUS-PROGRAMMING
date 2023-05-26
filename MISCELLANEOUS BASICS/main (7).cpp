
#include <iostream>

using namespace std;

int main ()
{
  int a{56};
  int b{877};
  int c{6};

  cout << boolalpha;
  cout << " a > b && a > c : " << ((a > b) && (a > c)) << endl;
  cout << " a > b || a > c : " << ((a > b) || (a > c)) << endl;
  cout << " !(a>b) : " << (!(a > b));
  return 0;
}

