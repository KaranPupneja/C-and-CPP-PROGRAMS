#include<iostream>
using namespace std;
class count
{
public:
   static int counter;
    void inital()
    {
        counter =0;
    }
    void incr()
    {
        int a,i;
        cout<<"enter the no. of incriment\n";
        cin>>a;
        for(i=0;i<a;i++)
        {

          counter++;
        }
    }
    void decri()
    {

        int a,i;
        cout<<"enter the no. of decriment\n";
        cin>>a;
        for(i=0;i<a;i++)
        {

          counter--;
        }
    }
   static void disp()
    {
       cout<<"value of counter is "<<counter;
    }


};
int count :: counter=5; 
int main()
{
    count c1,c2;
   // c1.inital();
    c1.incr();
    c1.decri();
    //c2.disp();
count::disp();
}
