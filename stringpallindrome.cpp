#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
char a[100];
int i,l,c=0;
cout << "Enter the string : "<<"\n";
cin >> a;
l=strlen(a);
for(i = 0; i < l/2; i++)
{
a[l-1-i] = a[i];
c++;
}
if(c==i)
cout << "The string is a palindrome"<<"\n";
else
cout << "The string is not a palindrome"<<"\n";
}
