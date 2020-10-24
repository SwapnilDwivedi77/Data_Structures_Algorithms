/* Given an array arr[] of positive integers of size N. 
 * Reverse every sub-array of K group elements. */

#include <bits/stdc++.h>
using namespace std;

vector<long long> reverseInGroups(vector<long long> arr, int n, int k)
{

    int start, end;
    vector<long long> result;
    for (int i = 0; i < n; i += k)
    {
        start = i;
        end = min(i + k - 1, n - 1);

        for (int l = end; l >= start; l--)
        {
            result.push_back(arr[l]);
        }
    }
    return result;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int n;
        cin >> n;

        vector<long long> arr;

        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            arr.push_back(x);
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        int k;
        cin >> k;
        arr = reverseInGroups(arr, n, k);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
}