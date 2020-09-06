#include<iostream>
using namespace std;
int main(void)
{
    int n=1000,i,j,flag=0;
    int arr[n];
    cout<<"Enter the Array"<<"\n";
    for(i=0;i<n;i++)
    arr[i]=1;
                // Part A.
    for(i=0;i<n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                arr[i]=0;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            arr[i]=1;
        }
    }
                    //Part B.
    for(i=2;i<n;i++)
    {
        if(arr[i]==1)
        {
            for(j=i+1;j<n;j++)
            {
                if(j%i==0)
                {
                    arr[j]=0;
                }
            }
        }
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<i<<" is a Prime Number"<<"\n";
        }
    }
}
