#include<iostream>
using namespace std;
struct shuzu
{int a;int b;int c;};
int find(shuzu *p,int m,int n)
{
    shuzu *low,*high,*mid;
    low=p;high=p+n-1;
    while(low<=high)
    {
    mid=(high-low)/2+low;
    if(mid->a<m) low=mid+1;
    else if(mid->a>m) high=mid-1;
    else if(mid->a==m) return mid-p;
    }
    return -1;
}
void order(shuzu *p,int n)
{
    int c,d;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if((p+j)->a>(p+j+1)->a) { c=(p+j)->a;(p+j)->a=(p+j+1)->a;(p+j+1)->a=c; 
                                      d=(p+j)->b;(p+j)->b=(p+j+1)->b;(p+j+1)->b=d; }
        }
    }
}
int main()
{
    int n,m;
    shuzu *p=new shuzu[n];
    cout<<"数组长度";
    cin>>n;
    cout<<"输入要找的数字";
    cin>>m;
    cout<<"输入数组";
    for(int i=0;i<n;i++) {cin>>(p+i)->a; (p+i)->b=i;}
    order(p,n);
    cout<<"排序后的数组";
    for(int i=0;i<n;i++) cout<<(p+i)->a<<" "<<(p+i)->b<<'\n';
    if(find(p,m,n)!=-1) {cout<<"该数字在排序后的数组中的序号为"<<find(p,m,n)<<endl<<"该数字在原数组中的序号为"<<((p+find(p,m,n))->b);}
    else cout<<"该数字在数组中不存在！";
    delete[] p;
    return 0;
}