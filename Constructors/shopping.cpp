#include<iostream>
using namespace std;
main()
{
    int code[100],price[100],quantity[100],sum=0;
    cout<<"Enter code and price and quantity : ";
    for(int i=0;i<3;i++)
    {
        cin>>code[i]>>price[i]>>quantity[i];
    }
    cout<<"Bill:::\n";
    for(int i=0;i<3;i++)
    {
        cout<<code[i]<<"  "<<price[i]<<" x "<<quantity[i]<<endl;
        sum=sum+price[i]*quantity[i];
    }
    cout<<"Total bill : "<<sum;
}
