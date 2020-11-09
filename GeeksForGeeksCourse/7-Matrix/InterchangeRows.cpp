/* Given a matrix of dimensions n1 x m1. 
 * Interchange its rows in-place such that the
 * first row will become the last row and so on.  */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void interchangeRows(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0, end = row - 1;

        while (start <= end)
        {

            for (int j = 0; j < col; j++)
                swap(matrix[start][j], matrix[end][j]);
            start++;
            end--;
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
        ob.interchangeRows(A);

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
