# include<iostream>
using namespace std;
int main()
{
    int a,i,j,o=0,count;
    cin>>a;
    cout<<"以内的质数有";
    for(i=1;i<=a;i++)
{       o=0;//重置o
        for (j=1;j<=i;j++)
        {   if(i%j==0)
                o+=1;    }//循环之后再判断
       if(o==2||i==1)
        {  count++;
        cout<<i<<'\t';  
        if (count>6) 
        {cout<<'\n'; 
        count=0; }    }
} 
return 0;
} 