#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 12---
  // *      *
  // **    **
  // ***  ***
  // ********

  int n;
  cout << " Enter the number ofrows for the pattern:" << endl;
  cin >> n;
  int i=1, m=n;
  while (i<=n)
    {
      int j=1;
      while(j<=i)
        {
          cout << "*";
          j++;
        }
      int s=1;
      while (s<=2*m-2)
        {
          cout << " ";
          s++;
        }
      int k=1;
      while (k<=i)
        {
          cout << "*";
          k++;
        }
      i++;
      m--;
      cout << endl;
    }
}
