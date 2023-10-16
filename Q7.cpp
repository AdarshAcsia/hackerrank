#include <iostream>
using namespace std;

int closedPaths(int number)
{
  int count = 0;
  while (number > 0)
  {
    int digit = number % 10;
    if (digit == 0 || digit == 4 || digit == 6 || digit == 9) {
      count++;
    }
    else if (digit == 8)
    {
      count += 2;
    }
    number /= 10;
  }
  return count;
}

int main()
{
  int number = 1288;
  cout << closedPaths(number) << endl;
  return 0;
}
