#include<iostream>
using namespace std;
class student
{
    char name[100];
    int roll,avg=0;
    int marks[3];
public:
    void get();
    void average();
    void disp();
};
void student :: get()
{
    cout<<"Enter name rollNumber and marks : \n";
    cin>>name>>roll;
    int i=0;
    while(i<3)
    {
        cin>>marks[i];
        i++;
    }
}
void student :: average()
{
    int i=0;
    while(i<3)
    {
        avg=avg+marks[i];

        i++;
    }
    avg=avg/3;
}
void student :: disp()
{
    cout<<" Name : "<<name<<"\n rollNumber : "<<roll<<"\n avg : "<<avg;
}
main()
{
    student obj;
    obj.get();
    obj.average();
    obj.disp();
}
