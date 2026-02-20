# include<iostream>
using namespace std;
int main()
{
    int i,j,a ;
    cin>>a;
    for (int i=0;i<=a;i++)
    {
        for (int j=0;j<=a;j++)
        {
            if(i==j)
            cout<<"o";
            else
            cout<<"_";
        }
        cout<<'\n';
    }
}