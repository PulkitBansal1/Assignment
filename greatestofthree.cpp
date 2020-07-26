#include <iostream>
using namespace std;

int main(void)
{
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if((n1 >= n2) && (n1 >= n3))
        cout << "Largest number: " << n1<<"\n";
    else if ((n2 >= n1) && (n2 >= n3))
        cout << "Largest number: " << n2<<"\n";
    else
        cout << "Largest number: " << n3<<"\n";
}
