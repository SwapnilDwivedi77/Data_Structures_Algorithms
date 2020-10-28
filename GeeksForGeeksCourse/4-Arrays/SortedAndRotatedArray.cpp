/* Given an array arr[] of N distinct integers, check if this array 
 * is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. 
 * Note that input array may be sorted in either increasing or decreasing order, 
 * then rotated. A sorted array is not considered as sorted and rotated, i.e., 
 * there should be at least one rotation. */
#include <bits/stdc++.h>
using namespace std;
bool checkRotatedAndSorted(int arr[], int n)
{

    int maxIdx = 0, maxValue = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
            maxIdx = i;
        }
    }

    if (arr[0] > arr[n - 1])
    {

        for (int i = 0; i < maxIdx; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "inside first if : " << endl;
                return false;
            }
            for (int i = maxIdx + 1; i < n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                    return false;
            }
            return true;
        }
    }

    if (arr[0] < arr[n - 1])
    {

        for (int i = 0; i < maxIdx - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                return false;
            }
            for (int i = maxIdx; i < n - 1; i++)
            {
                if (arr[i] < arr[i + 1])
                    return false;
            }
            return true;
        }
    }
    return true;
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

        bool ans = checkRotatedAndSorted(arr, size);
        if (ans)
            cout << "Yes";
        else
            cout << "no";
    }
    return 0;
}