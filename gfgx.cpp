#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>> T;
    while(T--)
    {
        int X, L, U, c=0;
        cin>>X>>L>>U;
        for(int i=L+1;i<U;i++)
        {  
            int d=i;
            while(d)
            { 
                if((d%10)==X)
                c++;
                d=d/10;
            }
        }
        cout<<c<<endl;
    }   
	return 0;
}