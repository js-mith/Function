#include <iostream>
using namespace std;

int binary(int input[], int n, int x)
{
    int i;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == input[mid])
        {
            return mid;
            
        }

        else if (x > input[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

   return -1;
}

int main()
{
    int n;
    int input[100];
    int x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    cin >> x;

   cout<<binary(input, n, x)<<endl;

    return 0;
}