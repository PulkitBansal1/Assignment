#include<iostream>
using namespace std;
void circle(int r, int c)
{
	int maxr = r / 2;
	maxr = r - maxr;
	int maxc = c / 2;
	int fblock  = c - maxc - maxc / 2 - 1;
	int lblock = fblock + maxc - 1;
	int fleft = r - maxr - maxr / 2 ;
	int lleft = fleft + maxr - 1;
	int ci1 = fblock - 1;
	int ci2 = lblock + 1;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j >= fblock && j <= lblock)
				{
					cout << "*";
				}
				 else {
					cout << " ";
				}
			}
			else if (i == 1 || i == r - 2)
			{
				if ( j == ci2 || j == ci1)
				{
					cout << "*";
				}
				 else
                    {
					cout << " ";
				}
			}
			 else
                {
                    if (i >= fleft && i <= lleft)
                    {
                        if (j == 0 || j == c - 1)
                        {
                            cout << "*";
                        }
                         else
                            {
                                cout << " ";
                            }
                    }
                }
		}
		cout << "\n";
	}
}
int main(void)
{
    int r, c;
    int r1, c1;
	cout << "Enter number of rows and Column of Circle \n";	
	cin >> r1 >> c1  ;
	circle(r1, c1);
}
