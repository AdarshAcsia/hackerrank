#include <iostream>
using namespace std;

int getcount(int arr[],int n)
{
    int p1,p2;
    for(int i = 0;i<n;i++)
    {
        p1=0;p2=0;
        for (int j=0;j<=i;j++)
        {
            if(arr[j] == 1)
            {
                p1++;
            }
            else
            {
                p1--;
            }
        }
        for(int j =i;j<n;j++)
        {
            if(arr[j] == 1)
            {
                p2++;
            }
            else
            {
                p2--;
            }
        }
        if(p1>p2)
        {
            return i;
        } 
    }  
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<getcount(arr,n);
    return 0;
}
