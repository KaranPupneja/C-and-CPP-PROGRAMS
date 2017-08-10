#include<iostream>
using namespace std;
class st
{
public:
    static int f1(int x , int y)
    {
        cout<<"INT";
        return x+y;
    }

    static double f1(double x , double y)
    {
        cout<<"DOUBLE";
        return x+y;
    }
};
main()
{
    int x=st :: f1(10,10);

    cout<<x<<endl;
    double y=st :: f1(10.0,10.0);
    cout<<y;
}
