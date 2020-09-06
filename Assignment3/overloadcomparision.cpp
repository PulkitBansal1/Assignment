#include<iostream>
using namespace std;
class Complex
{
    public:
    int real,img;
    Complex(int x=0,int y=0)
    {
        real=x;
        img=y;
    }
    Complex print()
    {
        cout<<real<<" + i"<<img<<"\n";
    }
    bool operator == (Complex const &obj)
    {
        if(real == obj.real && img ==obj.img)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator != (Complex const &obj)
    {
        if(real != obj.real || img !=obj.img)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main(void)
{
    Complex c1(4,5) , c2(4,5) , c3(10,9), c4(5,4);
    bool var1 = c1 == c2,var2 = c3!=c4;
    cout<<"First Complex no = ";
    c1.print();
    cout<<"Second Complex no = ";
    c2.print();
    cout<<"Third Complex no = ";
    c3.print();
    cout<<"Fourth Complex no = ";
    c4.print();
    if(var1==1)
    cout<<"\nFirst and Second Complex no. are equal"<<"\n";
    else
    cout<<"\nFirst and Second Complex no. are not equal"<<"\n";
    if(var2==1)
    cout<<"Third and fourth Complex no. are not equal"<<"\n";
    else
    cout<<"Third and fourth Complex no. are not equal"<<"\n";
}
