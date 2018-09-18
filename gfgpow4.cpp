#include<iostream>
using namespace std;
int isPowerOfFour(unsigned int n);
/*Driver program to test above function*/
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(isPowerOfFour(n))
	    cout<<1<<endl;
        else
	    cout<<0<<endl;
    }
    //getchar();
    return 0;
}
int isPowerOfFour(unsigned int n)
{
    if(n>0)
    {
        while(n%4==0)
        n=n/4;
        if(n==1)
        return 1;
    }
    if(n==0 || n!=1)
    return 0;
}
