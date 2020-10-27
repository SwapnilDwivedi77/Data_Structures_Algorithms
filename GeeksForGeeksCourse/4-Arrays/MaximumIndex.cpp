/* Given an array A[] of N positive integers.
 * The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j]. */

#include <bits/stdc++.h>
using namespace std;

// Function returns the maximum of j-i fullfilling condition of A[i] <= A[j]
int maxIndexDiff(int arr[], int n)
{
    int L[n], R[n];

    L[0] = arr[0];
    R[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        L[i] = min(L[i - 1], arr[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        R[i] = max(R[i + 1], arr[i]);
    }

    int i = 0, j = 0, maxDiff = -1;

    while (i < n && j < n)
    {

        if (L[i] <= R[j])
        {
            if ((j - i > maxDiff))
                maxDiff = j - i;
            j++;
        }
        else
        {
            i++;
        }
    }

    return maxDiff;
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

        int difference = maxIndexDiff(arr, size);

        cout << difference << endl;
    }
    return 0;
}