/* The cost of stock on each day is given in an array A[] of size N.
 *  Find all the days on which you buy and sell the stock so that in
 * between those days your profit is maximum. */

#include <bits/stdc++.h>
using namespace std;


// prints the days on which you can buy and sell the stock, so that in between those days profit is maximum
void stockBuySell(int arr[], int n)
{

    int peak = 0, valley = 0, i = 0, flag = 0;

    while (i < n - 1)
    {

        while (i < n - 1 && arr[i] >= arr[i + 1])
            i++;

        valley = i;

        while (i < n - 1 && arr[i] <= arr[i + 1])
            i++;
        peak = i;

        if (valley != peak)
        {
            flag = 1;
            cout << "(" << valley << " " << peak << ")";
        }
    }

    if (flag == 0)
        cout << "No profit";
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

        stockBuySell(arr, size);
    }
    return 0;
}