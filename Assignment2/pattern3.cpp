#include<iostream>
using namespace std;
void arrow(int r, int c)
{
	int midrow = c / 2 ;
    int secondblock = midrow + 2;
	int secondlastblock = midrow + 2;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 1) {
				if ( j == midrow - 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow - 1)
				{
					cout << "*";
				}
				if ( j == midrow - 2)
				{
					cout << "*";
				}
            }
			if (j == midrow )
			{
				cout << " *";
			}
			else {
				cout << " ";
			}
            if (i == 1)
			{
                if ( j == midrow + 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow + 1)
				{
					cout << "*";
				}
				if ( j == midrow + 2)
				{
					cout << "*";
				}
            }
        }
		cout << "\n";
	}
}
int main()
{
    int r, c;
    int r2, c2;
	cout << "Enter number of rows and Column of Arrow \n";
	cin >> r2 >> c2  ;
	arrow(r2, c2);
}
