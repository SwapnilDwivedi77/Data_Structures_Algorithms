/* Given N integer ranges, the task is to find the maximum occurring integer in these ranges.
 * If more than one such integer exits, find the smallest one. The ranges are given as two 
 * arrays L[] and R[].  L[i] consists of starting point of range and R[i] consists of 
 * corresponding end point of the range.

 * For example consider the following ranges.
 * L[] = {2, 1, 3}, R[] = {5, 3, 9)
 * Ranges represented by above arrays are.
 * [2, 5] = {2, 3, 4, 5}
 * [1, 3] = {1, 2, 3}
 * [3, 9] = {3, 4, 5, 6, 7, 8, 9}
 * The maximum occurred integer in these ranges is 3. */
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;

// Function returns the maximum occured number
int maxOccured(int L[], int R[], int n, int maxx)
{

    vector<int> range(MAX);

    for (int i = 0; i < n; i++)
    {
        range[L[i]] += 1;
        range[R[i] + 1] -= 1;
    }

    int maxFrequency = range[0];
    int idx = -1;

    for (int i = 1; i < maxx + 1; i++)
    {
        range[i] += range[i - 1];
        if (maxFrequency < range[i])
        {
            maxFrequency = range[i];
            idx = i;
        }
    }
    return idx;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int L[n];
        int R[n];

        for (int i = 0; i < n; i++)
            cin >> L[i];

        int maxx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> R[i];
            if (R[i] > maxx)
                maxx = R[i];
        }

        cout << maxOccured(L, R, n, maxx) << endl;
    }
}