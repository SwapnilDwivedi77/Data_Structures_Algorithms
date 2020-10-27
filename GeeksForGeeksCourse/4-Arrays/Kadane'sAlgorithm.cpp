/* Given an array arr of N integers. Find the contiguous sub-array with maximum sum. */

#include <bits/stdc++.h>
using namespace std;

// Functions returns the max sum of contiguous sub-array
int maxSubarraySum(int arr[], int n)
{
 int currentSum = INT_MIN, maxSum = INT_MIN;

        for(int i=0;i < n; i++) {

            currentSum = max(currentSum , 0)+ arr[i];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
}

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

        int maxSum = maxSubarraySum(arr, size);

        cout << maxSum << endl;
    }
    return 0;
}