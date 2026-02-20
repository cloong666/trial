#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n=1;
    int*p=new int[n];
    int*q=new int[n+1];
    *p=1;*q=*(q+1)=1;
    int a,i=0,b=0,u=0;
    cin>>a;
    while(i<a)
    {
        if(i==0){cout<<setw(5)<<*p<<endl;i++;u++;}
        for(int o=0;o<n+1;o++) 
        {
            if(i>a) {b=1;break;}
            cout<<setw(5)<<*(q+o)<<"  ";
            if(o==n) {cout<<'\n';i++;u++;}
        }
        if(b==1) break;
        n+=1;
        delete[] p;
        p=new int[n];
        for(int u=0;u<n;u++)
        *(p+u)=*(q+u);
        delete[] q;
        q=new int[n+1];
        *q=1;
        for(int h=1;h<n;h++)
        *(q+h)=*(p+h-1)+*(p+h);
        *(q+n)=1;
    }
    delete[] p;
    delete[] q;
    return 0;
}
//迭代杨辉三角