#include<iostream>
using namespace std;
int main()
{
   char str[1000], ch;
   int i, frequency = 0;

   cout<<"Enter a string: ";
   cin>>str;

   cout<<"Enter a character to find the frequency: ";
   cin>>ch;

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   cout<<frequency;

   return 0;
}
