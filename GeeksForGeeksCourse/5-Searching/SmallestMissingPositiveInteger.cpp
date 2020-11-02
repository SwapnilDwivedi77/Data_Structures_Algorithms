/* You are given an array arr[] of N integers including 0.
 * The task is to find the smallest positive number missing from the array. */

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{

    int j = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] <= 0){
            swap(arr[i], arr[j]);
            j++;
        }
        }
    }

    arr += j;
    n -= j;

    for (int i = 0; i < n; i++)
    {

        if (abs(arr[i]) - 1 < n && arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    }

    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            return i + 1;
    return n + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];

        int missing = missingNumber(arr, sizeOfArray);
        cout << missing;
    }
    return 0;
}