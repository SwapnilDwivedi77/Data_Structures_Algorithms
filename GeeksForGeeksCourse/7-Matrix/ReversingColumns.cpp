/* Given a matrix of dimensions n1 x m1. 
 * Reverse its columns in-place such that the
 * last column will become the first column and so on.  */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void reverseCol(vector<vector<int>> &matrix)
    {
        int col = matrix[0].size();
        int row = matrix.size();

        int start = 0, end = col - 1;

        while (start <= end)
        {

            for (int i = 0; i < row; i++)
            {

                swap(matrix[i][start], matrix[i][end]);
            }
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
        ob.reverseCol(A);

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
