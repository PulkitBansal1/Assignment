#include<iostream>
using namespace std;
int main(void)
{
int i,n,c=0;
cout<<"Enter any number: ";
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
cout<<"The entered number "<<n<<" is a Prime number"<<"\n";
}
else
{
cout<<"The entered number "<<n<<" is not a prime number"<<"\n";
}
}
