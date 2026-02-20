# include<iostream>
using namespace std;
int main()
{
    int a,i,j=0;
    cout<<"输入一个数字";
    cin>>a;
    for (i=1;i<=a;i++)
    {   if(a%i==0)
           j+=1;    }
    {if(j==2)
        cout<<"质数";
    else 
        cout<<"不是质数";}   
    return 0;
}