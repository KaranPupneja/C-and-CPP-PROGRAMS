#include<iostream>
using namespace std;
class student
{
    char n[10];
public :
    void get();
    void disp(char *a);
};
inline void student:: get()
{
    cin>>n;
    disp(n);
}
inline void student :: disp(char *a)
    {
        cout<<"TADAAAA : "<<a;
    }
main()
{
    student s;
    s.get();
}
