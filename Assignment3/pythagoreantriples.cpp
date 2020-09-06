#include<iostream>
using namespace std;
int main(void)
{
    int side1=0,side2=0,hypt=0;
    cout<<"Pythagorean Triplets: "<<"\n";
    for(side1=1;side1<=500;side1++)
    {
        for(side2=1;side2<=500;side2++)
        {
            for(hypt=1;hypt<=500;hypt++)
            {
                if( (side1*side1) + (side2*side2) == (hypt*hypt) && hypt<=500 )
                {
                    cout<<side1<<" "<<side2<<" "<<hypt<<endl;
                }
            }
        }
    }
}
