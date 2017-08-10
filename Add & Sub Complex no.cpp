using namespace std;
#include <iostream>
class Complex
    {
    int real;
    int imag;
    public:
//Enter your code here
void Set();
Complex Add(Complex a);
Complex Sub(Complex a);
void Show();

};
void Complex::Set()
 {
cin>>real>>imag;
}

Complex Complex :: Add(Complex a)
{ Complex c;
c.real=real+a.real;
c.imag=imag+a.imag;
return c;
 }
Complex Complex :: Sub(Complex a)
{ Complex c;
c.real=real-a.real;
c.imag=imag-a.imag;
return c;
 }
void Complex::Show()
{
    if(imag>0)
        cout<<real<<"+"<<imag<<"i"<<endl;
    else
 cout<<real<<imag<<"i";
}
int main() {
    Complex C1,C2,C3;
    C1.Set();
    C2.Set();
    C3= C1.Add(C2);
    C3.Show();
    C3=C1.Sub(C2);
    C3.Show();
    return 0;
}
