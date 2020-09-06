#include<iostream>
#include<math.h>
using namespace std;
class Volume
{
    public:
    float radius;

    Volume(float r)
    {
        cout<<"Enter the radius of the sphere: ";
        cin>>r;
        radius=r;
    }
    inline float sphereVolume()
    {
        return ((4.0*3.14159*pow(radius,3))/3.0);
    }
};
int main(void)
{
    float r;
    Volume v1(r);
    cout<<"Volume: ";
    cout<< v1.sphereVolume()<<"\n";
}
