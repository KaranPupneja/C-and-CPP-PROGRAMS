#include<iostream>
using namespace std;
class counter
{
    int c;
public:
    void initial()
    {
        c=-1;
    }
    void inc();
    void dec();
    void print();
};
void counter :: inc()
{
    int a;
    c++;
    cout<<"Enter a = 0 to inc. or a = 1 to dec. else 2 to print ";
    cin>>a;
    if(a==0)
    {
        inc();
    }
    else if(a==1)
    {
        dec();
    }
    else
    {
        print();
    }
}
void counter :: dec()
{
    int a;
    c--;
    cout<<"Enter a = 0 to inc. or a = 1 to dec. else 2 to print ";
    cin>>a;
    if(a==0)
    {
        inc();
    }
    else if(a==1)
    {
        dec();
    }
    else
    {
        print();
    }
}
void counter :: print()
{
    cout<<"Answer is : "<<c;
}
main()
{
    counter obj;
    obj.initial();
    obj.inc();
}
