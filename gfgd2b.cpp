#include<iostream>
using namespace std;
int main()
{
    //code
    int i,T,a=1,num,rem,bin;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>num;
        bin=0;
        a=1;
        while(num>0)
    {
        rem=num%2;
        bin=bin+rem*a;
        a=a*10;
        num=num/2;
    }
    cout<<bin<<endl;
    }
    
    return 0;
}