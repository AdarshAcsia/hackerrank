#include <iostream>
#include <unordered_map>
using namespace std;

int getUniqueCharacter(string s)
{
  unordered_map<char, int> charCount;
  for (char c : s)
  {
    charCount[c]++;
  }
  for (int i = 0; i < s.length(); i++)
  {
    if (charCount[s[i]] == 1) 
    {
      return i + 1;
    }
  }
  return -1;
}

int main()
{
  string s = "falafal";
  cout << getUniqueCharacter(s)<<endl;
  return 0;
}
