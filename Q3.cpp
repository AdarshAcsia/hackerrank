#include <iostream>
using namespace std;
int getsequencesum(int i, int j, int k)
{
    int sum = 0;
    for (i;i<j;i++)
    {
        sum = sum+i;
    }
    for (j;j >= k;j--)
    {
        sum = sum + j;
    }
    return sum;
}

int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    cout<<getsequencesum(i,j,k);
    return 0;
}
