#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    a=1;
    b=0;
    while (a>b)
    {
       cin >> a >> b >> x;
       if (a<=x && x<=b)
       {
          cout << "DA";
       }
       else 
       {
          cout << "NU";
       }
    }

    return 0;
}