#include <iostream>
#include <cstring>
using namespace std;

string winner(string eric, string bob)
{
  int erica_score = 0, bob_score = 0;
  for (int i = 0; i < eric.length(); i++)
  {
    switch (eric[i])
    {
      case 'E': erica_score += 1; break;
      case 'M': erica_score += 3; break;
      case 'H': erica_score += 5; break;
      default: break;
    }
  }

  for (int i = 0; i < bob.length(); i++)
  {
    switch (bob[i])
    {
      case 'E': bob_score += 1; break;
      case 'M': bob_score += 3; break;
      case 'H': bob_score += 5; break;
      default: break;
    }
  }

  if (erica_score == bob_score)
  {
    return "Tie";
  }
  else if (erica_score > bob_score)
  {
      return "Erica";
  }
  else
  {
      return "Bob";
  }
}

int main()
{
  string eric, bob;
  cin >> eric >> bob;
  cout << winner(eric, bob) << endl;
  return 0;
}
