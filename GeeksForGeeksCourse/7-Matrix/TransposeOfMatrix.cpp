/* Write a program to find the transpose of a square matrix of size N*N.
 * Transpose of a matrix is obtained by changing rows to columns and columns to rows. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void transpose(vector<vector<int>> &matrix, int n)
    {
        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {

                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<vector<int>> A(n);

        for (int i = 0; i < n; i++)
        {
            A[i].assign(n, 0);
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }

        Solution ob;
        ob.transpose(A, n);

        for (int i = 0; i < A.size(); ++i)
        {
            for (int j = 0; j < A[0].size(); ++j)
            {
                cout << A[i][j] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}
