/* Given an array Arr of N integers arranged in a circular fashion.
 * Your task is to find the minimum absolute difference between adjacent elements. */

#include <bits/stdc++.h>
using namespace std;

// returns the minimum difference of adjacent elements in circular array
int minAdjDiff(int arr[], int n)
{

    int diff = 0, minDiff = 1000000;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > arr[(i + 1) % n])
            diff = arr[i] - arr[(i + 1) % n];
        else
            diff = arr[(i + 1) % n] - arr[i];

        minDiff = min(minDiff, diff);
    }
    return minDiff;
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

        cout << minAdjDiff(arr, size);
    }
}