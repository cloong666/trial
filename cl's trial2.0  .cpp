# include<iostream>
using namespace std;
int main()
{
    int a[3][2]={{1,2},{3,4},{5,6}};
    int (*p)[2];
    p=a+1;

    int x,y=1,z=2;
    x=(1<2)?--y:++z;//--y与++z哪一个被输出执行哪一个，也就是只执行一个
    cout<<x<<y<<z<<endl;

    cout<<**p<<'\t'<<p<<endl;//行指针  cout  3

    cout<<"\\"<<"\'"<<"\""<<endl;

    //int *b[]={1,3,5,7}; error 显然数字没有和字符串一样的地址认定方式

    int b,c=5,*q=&c;
    cout<<q<<endl;
    b=*q++;
    cout<<q<<endl;
    cout<<b<<" "<<c<<endl;

    int u;
    double v;
    v=u=4.8;
    cout<<double(v)<<endl;

    static int d[3][3]={{1},{2,3},{4,5,6}};
    int *pa=d[2];//==int *pa=d[2][0];
    cout<<*pa<<*(pa-1)<<*(pa-2)<<endl;

    return 0;
}    