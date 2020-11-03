/* Given an unsorted array A of size N of non-negative integers,
 * find a continuous sub-array which adds to a given number S. */

#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, int s)
{

    int currentSubarray = arr[0], start = 0;
    vector<int> result;

    for (int i = 1; i <= n; i++)
    {

        while (currentSubarray > s && start < i - 1)
        {

            currentSubarray -= arr[start];
            start++;
        }

        if (currentSubarray == s)
        {

            result.push_back(start + 1);
            result.push_back(i);

            return result;
        }

        if (i < n)
            currentSubarray += arr[i];
    }

    result.push_back(-1);
    return result;
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
        int s;
        cin >> s;
        for (int i = 0; i < size; i++)
            cin >> arr[i];

        vector<int> subarray = subarraySum(arr, size, s);
        for (int i = 0; i < subarray.size(); i++)
            cout << subarray[i] << " ";
    }
    return 0;
}