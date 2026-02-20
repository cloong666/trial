# include<iostream>
using namespace std;
int cl (int x,int y)
{
    return x*x+2*x*y+y*y;
}
int main()
{
int a,b,z;
cin>>a>>b;
z=cl(a,b);
cout<<z;
return 0;
}