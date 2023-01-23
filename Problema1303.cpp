#include <iostream>

using namespace std;

int main()
{
    int a,b;
    char simbol;
    a = 0;
    b = 1;
    simbol = '-';
    while ((simbol!='+' && simbol!='-' && simbol!='*' && simbol!='/') || (a<b && (simbol == '-' || simbol == '/')))
    {
        cin >> a >> b >> simbol;

        if (simbol=='+')
        {
            cout << "a+b=" << a+b
        }
        else if ((simbol=='-') && a>b)
        {
            cout << "a-b=" << a-b
        }
        else if (simbol=='*')
        {
            cout << "a*b=" << a*b
        }
        else if ((simbol=='/') && a>b)
        {
            cout << "a/b=" << a/b << " rest = " << a%b
        }
    }
}