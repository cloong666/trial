#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4},*p,*q,t;
    const int*o;
    p=a+2;o=a+2;q=a;
    t=*p;*p=*q;*q=t;
    cout<<*o<<o-q;
}