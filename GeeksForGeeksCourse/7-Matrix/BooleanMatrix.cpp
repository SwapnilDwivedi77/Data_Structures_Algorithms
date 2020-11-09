/* Given a boolean matrix of size RxC where each cell contains either 0 or 1,
  * modify it such that if a matrix cell matrix[i][j] is 1 then all the cells
  * in its ith row and jth column will become 1. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void booleanMatrix(vector<vector<int>> &matrix)
    {
        // code here

        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> row, col;

        row.assign(m, 0);
        col.assign(n, 0);

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {

                if (matrix[i][j] == 1)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for (int i = 0; i < m; i++)
        {

            if (row[i] == 1)
            {

                for (int j = 0; j < n; j++)
                    matrix[i][j] = 1;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (col[j] == 1)
            {

                for (int i = 0; i < m; i++)
                    matrix[i][j] = 1;
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

        Solution ob;
        ob.booleanMatrix(A);

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
