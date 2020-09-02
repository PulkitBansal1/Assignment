#include<iostream>
using namespace std;
class Complex
{
    public: 
    Complex(int r=0 ,int i =0)
    {
       real = r;
       img = i;   
   }
   void print()
   {
       cout<<real<<" +i"<<img<<"\n";
   }
   Complex operator+(Complex const &obj)
   {
       Complex result ;
       result.real = real + obj.real;
       result.img = img + obj.img;
       return result;
   }
    void operator<<(Complex const &obj)
    {
  	cout<<real<<" +i"<<img<<"\n";
    }
    void operator >>(Complex const &obj)
    {
        cout<<"enter real part \n";
        cin>>real;
        cout<<"enter img part \n ";
        cin>>img;    
    }
    Complex operator * (Complex const &obj)
    {
        Complex result;
        result.real =  ((real*obj.real) -(img * obj.img));
        result.img = ((real*obj.img)+(img * obj.real));
        return result;    
    }
   private: 
   int real ,img ;
};
int main(void)
{
    Complex c1(20,4), c2(2,5);
    Complex c3;
    c3 = c1 * c2;
    c3 << c3;
}
