/* Given a square matrix of size N x N. The task is to rotate
 * it by 90 degrees in anti-clockwise direction without using any extra space. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rotateby90(vector<vector<int>> &matrix, int n)
    {
        // transpose
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                swap(matrix[i][j], matrix[j][i]);

        // reverse columns

        int k;
        for (int i = 0; i < n; i++)
        {
            k = n - 1;
            for (int j = 0; j < k; j++)
            {
                swap(matrix[j][i], matrix[k][i]);
                k--;
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
        ob.rotateby90(A, n);

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
