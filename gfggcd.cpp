#include<iostream>
using namespace std;
int main()
{

    int a,b,i,j,GCD,T;
    cin>>T;
    for(j=0;j<T;j++)
    {
        cin>>a>>b;
        for(i=1;i<=a && i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            GCD=i;
        }
        cout<<GCD<<endl;
    }
    return 0;
}