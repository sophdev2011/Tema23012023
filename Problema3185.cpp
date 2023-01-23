#include <iostream>

using namespace std;

int main()
{
    int a,b,n;
    a=1;
    b=0;
    while (a>b)
    {
       cin >> a >> b >> n;
       if (a<=n && n<=b)
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