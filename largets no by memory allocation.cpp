#include<iostream>
using namespace std;
int main()
{
	int *p;
	int a,l=0;
	cout<<"enter the no. of elements do u want to enter\n";
	cin>>a;
	p = new int(a);
	cout<<"enter the no.s\n";
	for(int i=0;i<a;i++)
	{
		cin>>p[i];
		if(l<p[i])
		{
			l = p[i];
		}
	}

cout<<"largest no is "<<l;

}
