/* Given a sorted array of positive integers (elements may be repeated) and a number x.
 * The task is to find the leftmost index of x in the given array. */

#include <bits/stdc++.h>
using namespace std;
// Function to find element in sorted array

int leftIndex(int n, int arr[], int X)
{

    int idx = -1;

    for (int i = 0; i < n; i++)
        if (arr[i] == X)
        {
            idx = i;
            break;
        }
    return idx;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        int X;
        cin >> X;
        int idx = leftIndex(size, arr, X);

        cout << idx << endl;
    }
    return 0;
}