#include<iostream>
using namespace std;
struct cl
{
    int a;
};
int main()
{
    int n=5;
    cl*p=new cl[n];
    cl*p1,*p2;
    for(int i=0;i<n;i++) (p+i)->a=i;
    p1=p+1;p2=p+3;
    cout<<p2-p1<<(p+4)->a;
}