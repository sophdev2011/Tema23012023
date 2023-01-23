#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c;
    x=1000;
    while (x<100 || x>999)
    {
        cin >> x;
        a=x/100;
        b=(x%100)/10;
        c=x%10;
        if (a%2==0)
        {
            cout << a << " ";
        }
        if (b%2==0)
        {
            cout << b << " ";
        }
        if (c%2==0)
        {
            cout << c;
        }
    }

    return 0;
}