#include<iostream>
using namespace std;
int main()
{
    int n=1;
    int*p=new int[n];
    while(n<=10)
    {
    for(int i=0;i<n;i++) p[i]=0;
    for(int i=0;i<n;i++) cout<<p[i]; cout<<'\n';
    n++;
    }
    return 0;
}