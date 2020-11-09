/* Given a matrix of size n x m, where every row and column 
 * is sorted in increasing order, and a number x. Find whether
 * element x is present in the matrix or not. */

#include <bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> arr, int n, int m, int x)
{
    int i = 0, j = m - 1;

    int min = arr[0][0], max = arr[n - 1][m - 1];

    if (x < min || x > max)
        return 0;
    while (i < n && j >= 0)
    {

        if (arr[i][j] == x)
            return 1;

        if (arr[i][j] > x)
            j--;
        if (arr[i][j] < x)
            i++;
    }
    return 0;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int r, c;
        cin >> r >> c;
        vector<vector<int>> A(r);

        for (int i = 0; i < r; i++)
        {
            A[i].assign(c, 0);
            for (int j = 0; j < c; j++)
            {
                cin >> A[i][j];
            }
        }
        int x;
        cin >> x;

        cout << search(A, r, c, x);

        cout << endl;
    }
    return 0;
}
