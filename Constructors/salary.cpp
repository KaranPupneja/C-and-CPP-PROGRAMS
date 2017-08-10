#include<iostream>
using namespace std;
class emp
{
    int eno;
    char ename[100];
    int bs,hra,da,totalsal;
public:
    void get();
    void total();
    void disp();

};
void emp:: get()
{
    cout<<"Enter name number name salary \n";
    cin>>eno>>ename>>bs;
}
void emp:: total()
{
    if(bs>=15000)
    {
        hra=0.1*bs;
        da=0.08*bs;
        totalsal=bs+hra+da;
    }
    else
    {
        hra=0.08*bs;
        da=0.05*bs;
        totalsal=bs+hra+da;
    }
}
void emp:: disp()
{
    cout<<"Salary of "<<ename<<" is "<<totalsal;
}
main()
{
    char i='a';
    while(i=='a')
    {
    emp a;
    a.get();
    a.total();
    a.disp();
    cout<<"\nDO you want to continue : ";
    cin>>i;
    }
}
