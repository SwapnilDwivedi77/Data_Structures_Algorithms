/* Given an array A of N integers. The task is to find a peak element in A in O( log N ) .
 * An array element is peak if it is not smaller than its neighbours. For corner elements,
 * consider only one neighbour. */

#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[], int start, int end, int n)
{

    int mid = (end + start) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
        return findPeak(arr, start, mid - 1, n);
    return findPeak(arr, mid + 1, end, n);
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

        int idx = findPeak(arr, 0, size - 1, size);

        cout << arr[idx] << endl;
    }
    return 0;
}