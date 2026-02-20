#define u 20                 //hang
#define v 10                 //lie
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void swap(int *a,int *b)
{
    int c;
    c=*a; *a=*b; *b=c;
}   
int main()
{
int a[u][v],c=1,b=15,*p;     //c~b
srand(time(0));
p=a[0]+0;
for (int i=0;i<u*v;i++)
*(p+i)=rand()%b+c;
for(int i=0;i<u*v;i++)
{
    cout<<*(p+i)<<'\t';
    if((i+1)%10==0)
    cout<<'\n';
}
cout<<'\n';
for(int j=0;j<u;j++)
{
    for(int i=0;i<v;i++)
    {
        for(int o=0;o<v-1-i;o++)
        if(a[j][o]>a[j][o+1])
            swap(&a[j][o],&a[j][o+1]);
    }
}
for(int j=0;j<v;j++)
{
    for(int i=0;i<u;i++)
    {
        for(int o=0;o<u-1-i;o++)
        if(a[o][j]>a[o+1][j])
            swap(&a[o][j],&a[o+1][j]);
    }
}
for(int i=0;i<u*v;i++)
{
    cout<<*(p+i)<<'\t';
    if((i+1)%v==0)
    cout<<'\n';
}
return 0;
}