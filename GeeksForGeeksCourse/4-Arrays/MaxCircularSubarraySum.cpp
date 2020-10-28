/* Given an array arr[] of N integers arranged in a circular fashion.
 * Your task is to find the maximum contiguous subarray sum. */
#include <bits/stdc++.h>
using namespace std;
int circularSubarraySum(int arr[], int n)
{
    int max_straight_SUM = INT_MIN;
    int min_straight_SUM = INT_MAX;
    int array_SUM = 0;

    int temp_maxSUM = 0;
    int temp_minSUM = 0;

    for (int i = 0; i < n; ++i)
    {
        array_SUM += A[i];

        temp_maxSUM += A[i];
        max_straight_SUM = max_straight_SUM < temp_maxSUM ? temp_maxSUM : max_straight_SUM;
        temp_maxSUM = temp_maxSUM < 0 ? 0 : temp_maxSUM;

        temp_minSUM += A[i];
        min_straight_SUM = min_straight_SUM > temp_minSUM ? temp_minSUM : min_straight_SUM;
        temp_minSUM = temp_minSUM > 0 ? 0 : temp_minSUM;
    }
    if (array_SUM == min_straight_SUM)
        return max_straight_SUM;
    return max(max_straight_SUM, (array_SUM - min_straight_SUM));
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

        int maxSum = circularSubarraySum(arr, size);

        cout << maxSum << endl;
    }
    return 0;
}