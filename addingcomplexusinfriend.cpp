#include<iostream>
using namespace std;
class COMPLEX
{
    int r1,img1,r2,img2;
    public:
        void enter()
        {
            cout<<" 1st complex number : " ;
            cin>>r1>>img1;
            cout<<" 2nd complex number : ";
            cin>>r2>>img2;
        }
    friend void add(COMPLEX a);
};
void add(COMPLEX a)
{

    a.r1=a.r1+a.r2;
    a.img1=a.img1+a.img2;
    cout<<"("<<a.r1<<")"<<"+"<<"("<<a.img1<<")"<<"i";
}

int main()
{
COMPLEX a;
a.enter();
add(a);

}
