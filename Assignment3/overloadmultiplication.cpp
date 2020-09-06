#include<iostream>
using namespace std;
class Complex
{
    private:
    int real, img;

    public:
    Complex(int x=0,int y=0)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator * (Complex const &obj)
    {
        Complex result;
        result.real=(real*obj.real) - (img * obj.img);
        result.img = (real* obj.img) + (img * obj.real );
        return result;
    }
};
int main(void)
{
    Complex c1(10,3),c2(2,5);
    Complex c3 = c1*c2;
    cout<<"First Complex Number= ";
    c1.display();
    cout<<"Second Complex Number= ";
    c2.display();
    cout<<"Product of First and Second Complex Number is:  ";
    c3.display();
}
