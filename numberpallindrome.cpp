#include <iostream>  
using namespace std;  
int main()  
{  
  int num,rev,sum=0,temp;    
  cout<<"Please Enter Your  Number: ";    
  cin>>num;    
 temp=num;    
 while(num>0)    
{    
 rev=num%10;    
 sum=(sum*10)+rev;    
 num=num/10;    
}    
if(temp==sum)
{    
cout<<"Given Number is Palindrome number"<<"\n";    
}
else    
{
cout<<"Given Number is not Palindrome number"<<"\n";   
} 
}  
