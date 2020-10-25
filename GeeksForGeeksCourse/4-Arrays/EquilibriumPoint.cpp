/* Given an array A of N positive numbers. 
 * The task is to find the first Equilibium Point in the array. 
 * Equilibrium Point in an array is a position such that the sum
 * of elements before it is equal to the sum of elements after it. */

#include <bits/stdc++.h>
using namespace std;

int equilibriumPoint(long long a[], int n)
{

    if (n == 1)
        return 1;

    int right = 0;

    for (int i = 2; i < n; i++)
        right += a[i];

    int left = a[0];

    for (int i = 1; i < n; i++)
    {
        if (left == right)
            return i + 1;
        left += a[i];
        right -= a[i + 1];
    }
    return -1;
}

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << equilibriumPoint(a, n);
    }
    return 0;
}