#include <iostream>
using namespace std;
int main()
{
    int i, n; double s = 0, t;
    for(i = 1; i <= 20; i++)
    {
        t=1;
        for(n = 1;n<=i; n++) {t = t * n; s = s + t;}
    }
    cout << "(1!) + (1! + 2!) + ... + (1! + 2! + ... + 20!) = " << s << "\n";
    return 0;
}