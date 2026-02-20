#include<iostream>
using namespace std;
class ARR
{
int n,a[100],b[100],nprime;
public:
ARR(int x[],int size){nprime=0;n=size;for(int i=0;i<n;i++) a[i]=x[i];}
int Prime(int x)
    {
    for(int i=2;i<x;i++) if(x%i==0) return 0;
    return 1;
    }
void Fun()
    {
    int j=0;
    for(int i=0;i<n;i++) if(Prime(a[i])==1) b[j++]=a[i];
    nprime=j;
    }
void Show()
    {
    for(int i=0;i<nprime;i++)
        {
        cout<<b[i]<<" ";
        if((i+1)%5==0) cout<<endl;
        }
    cout<<endl<<"nprime="<<nprime;
    }
};
int main()
{
int b[]={13,14,15,16,17,18,19,20,21,22};
ARR arr(b,10);
arr.Fun();
arr.Show();
return 0;
}

