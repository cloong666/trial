# include<iostream>
# include<cmath>
using namespace std;
double f(double x)
{
    return x*x+3*x-4;
}
double f1(double x)
{
    return 2*x+3;
}
double neton(double x0=0.0)
{
    double x1;
    x1=x0-f(x0)/f1(x0);
    if ( fabs(x1)>1e-7 )  return neton(x1);
    return x1;
}
int main()
{  
    double a;
    a=neton();
    cout<<a;
    return 0;
}