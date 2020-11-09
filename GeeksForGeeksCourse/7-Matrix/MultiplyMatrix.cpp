/* Two matrices A[][] and B[][] can only be multiplied if number of columns in
  * A is equal to number of rows in B. The dimensions of the resultant matrix will
  * have A's row size and B's column size.
  * Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively.
  * Multiply A and B. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> multiplyMatrix(const vector<vector<int>> &A, const vector<vector<int>> &B)
    {
        int r1 = A.size();
        int c1 = A[0].size();
        int r2 = B.size();
        int c2 = B[0].size();

        vector<vector<int>> result;
        vector<int> temp;

        if (c1 != r2)
            return result;

        int tempProduct = 0;

        for (int i = 0; i < r1; i++)
        {

            for (int j = 0; j < c2; j++)
            {
                tempProduct = 0;
                for (int k = 0; k < r2; k++)
                {

                    tempProduct += A[i][k] * B[k][j];
                }
                temp.push_back(tempProduct);
            }
            result.push_back(temp);
            temp.clear();
        }
        return result;
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        vector<vector<int>> A(row);

        for (int i = 0; i < row; i++)
        {
            A[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> A[i][j];
            }
        }

        cin >> row >> col;
        vector<vector<int>> B(row);

        for (int i = 0; i < row; i++)
        {
            B[i].assign(col, 0);
            for (int j = 0; j < col; j++)
            {
                cin >> B[i][j];
            }
        }

        Solution ob;
        vector<vector<int>> result = ob.multiplyMatrix(A, B);
        if (result.size() == 0)
            cout << "-1";
        else
        {
            for (int i = 0; i < result.size(); ++i)
            {
                for (int j = 0; j < result[0].size(); ++j)
                {
                    cout << result[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}