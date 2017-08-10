#include<iostream>
using namespace std;
main()
{
    int a,b,i,m,c;
    cin>>a>>b;
    m=(a>b)?a:b;
    for(i=1;i<=m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            c=i;
        }
    }
    cout<<a/c<<"/"<<b/c;
}
