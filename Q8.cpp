#include <iostream>
#include <algorithm>
using namespace std;

int groupDivision(int levels[], int n, int maxSpread)
{
  sort(levels, levels + n);
  int groups = 0;
  int i = 0;
  while (i < n)
  {
    int groupStart = levels[i];
    int j = i + 1;
    while (j < n && levels[j] <= groupStart + maxSpread)
    {
      j++;
    }
    groups++;
    i = j;
  }
  return groups;
}

int main()
{
  int n = 6;
  int levels[] = {10,1,19,21,5,20};
  int maxSpread = 9;
  cout << groupDivision(levels, n, maxSpread) << endl;
  return 0;
}
