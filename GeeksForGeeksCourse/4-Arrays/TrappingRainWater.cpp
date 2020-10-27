/* Given an array arr[] of N non-negative integers representing 
 * the height of blocks at index i as Ai where the width of each
 * block is 1. Compute how much water can be trapped in between
 * blocks after raining. The structure is like below:
  | |
  |_|
 * We can trap 2 units of water in the middle gap. */
#include <bits/stdc++.h>
using namespace std;

int trappingWater(int arr[], int n)
{

    int maxLeft[n], maxRight[n];

    maxLeft[0] = arr[0];

    for (int i = 1; i < n; i++)
        maxLeft[i] = max(maxLeft[i - 1], arr[i]);

    maxRight[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
        maxRight[i] = max(maxRight[i + 1], arr[i]);

    int capacity = 0;
    for (int i = 0; i < n; i++)
        capacity += min(maxLeft[i], maxRight[i]) - arr[i];
    return capacity;
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

        int capacity = trappingWater(arr, size);

        cout << capacity << endl;
    }
    return 0;
}