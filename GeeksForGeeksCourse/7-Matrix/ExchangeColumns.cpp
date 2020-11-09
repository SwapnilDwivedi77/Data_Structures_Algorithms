/* You are given a matrix of dimensions (n1 x m1).
 * You have to exchange its first column with the last column. */

#include <bits/stdc++.h>
using namespace std;

void exchangeColumns(vector<vector<int>> &matrix)
{
    int row = matrix.size(), col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {

        swap(matrix[i][0], matrix[i][col - 1]);
    }
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

        exchangeColumns(A);

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
