#include<iostream>
#include<string.h>
using namespace std;
void printReverseString(string , int  );
int last ;
int main(void) 
{
  string thisString;
  getline(cin, thisString);
  last = thisString.size();
  int start ;
  cin >> start;
  printReverseString(thisString, start);
}
void printReverseString(string thisString, int start )
 {
  cout << thisString[last - 1];
  if (last != start)
  {
    last = last - 1;
    printReverseString(thisString, start);
  }
}
