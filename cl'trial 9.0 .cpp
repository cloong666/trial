#include<iostream>
using namespace std;
void del(int*p,int n)
{
    int m=0,a=0;
    for(int j=0;j<n;)
        for(int i=0;i<n;i++) 
        {
            if(p[j+i]!=p[j+i+1])
            {
                m+=i;
                p[a+1]=p[j+i+1];
                a+=1;
                j+=i+1;
                break;
            }
        }
    n-=m;
    for(int i=0;i<n;i++) cout<<p[i]<<" "; 
}
void order(int*p,int n)
{
    int a;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(*(p+j)>*(p+j+1)) {a=*(p+j);*(p+j)=*(p+j+1);*(p+j+1)=a;}
        }
    } 
}
int main()
{
    int n,m;
    cout<<"数组长度";
    cin>>n;
    int *p=new int[n];
    cout<<"输入含有重复数字的数组";
    for(int i=0;i<n;i++) cin>>p[i];
    order(p,n);
    del(p,n);
    delete[]p;
    return 0;
}