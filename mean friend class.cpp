#include<iostream>
using namespace std;
class b
{
	int bb;
	friend class a;
	public:
 b()
 {
 	cout<<"enter the value 2";
	cin>>bb;
 }
	
};
class a
{
int aa,c;
//friend class b;
public:
a()
{
	cout<<"enter the value 1";
	cin>>aa;
}
void mean(b b2)
{
	
	c = aa + b2.bb;
	c = c/2;
}
void show()
{
	cout<<"mean is "<<c;
}

};


int main()
{ a a1;
  b b1;
  a1.mean(b1);
  a1.show();	
}

