#include<iostream>
using namespace std;
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
int find(int*p,int m,int n)
{
    int*low,*high,*mid;
    low=p;high=p+n-1;
    while(low<=high)
    {
    mid=(high-low)/2+low;
    if(*mid<m) low=mid+1;
    else if(*mid>m) high=mid-1;
    else if(*mid==m) return mid-p;
    }
    return -1;
}
int main()
{
    int n,m,b;
    cout<<"输入数组长度和要找的数字";
    cin>>n>>m;
    int*p=new int[n];
    int*q=new int[n];
    cout<<"输入数组";
    for(int i=0;i<n;i++){cin>>*(p+i);q[i]=p[i];}
    order(p,n);
    cout<<"排序后的数组";
    for(int i=0;i<n;i++) cout<<*(p+i)<<" ";
    b=find(p,m,n);
    if(b!=-1)
        {cout<<"该数字在排序后的数组中的序号为"<<b<<endl;
        for(int i=0;i<n;i++) if(q[i]==p[b]) cout<<"该数字在原数组中的序号为"<<i;}
    else cout<<"该数字在数组中不存在!";
    delete[] p;
    return 0;
}