/* You are given an array of size n. Find the maximum possible length of a 
 * subarray such that its elements are arranged alternately either as even 
 * and odd or odd and even . */
#include <bits/stdc++.h>
using namespace std;

/* Function returns the maximum possible length of a subarray such that its
 elements are arranged alternately either as even  and odd or odd and even . */
int maxEvenOdd(int arr[], int n)
{
    int len = 0, maxLength = 0;

    for (int i = 1; i < n; i++)
    {

        if (arr[i - 1] % 2 == 0 && arr[i] % 2 != 0 || arr[i - 1] % 2 != 0 && arr[i] % 2 == 0)
            len++;
        else
            len = 0;

        maxLength = max(len, maxLength);
    }
    return maxLength + 1;
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

        int maxLength = maxEvenOdd(arr, size);

        cout << maxLength << endl;
    }
    return 0;
}