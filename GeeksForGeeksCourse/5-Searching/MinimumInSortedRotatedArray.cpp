/* Given an array of distinct elements which was initially sorted.
 * This array is rotated at some unknown point. The task is to find
 * the minimum element in the given sorted and rotated array. */

#include <bits/stdc++.h>
using namespace std;

int minNumber(int arr[], int low, int high)
{
    while (low <= high)
    {

        if (low == high)
            return arr[low];

        int mid = low + (high - low) / 2;

        if (mid < high && arr[mid + 1] < arr[mid])
            return arr[mid + 1];

        if (mid > 0 && arr[mid - 1] > arr[mid])
            return arr[mid];

        if (arr[high] < arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
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
        cout << minNumber(arr, 0, size - 1) << endl;
    }
    return 0;
}