/* Given a matrix of size R*C. Traverse the matrix in spiral form. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int m, int n)
    {
        int k = 0, l = 0;
        vector<int> ans;

        while (k < m && l < n)
        {

            for (int j = l; j < n; j++)
                ans.push_back(matrix[k][j]);
            k++;

            for (int i = k; i < m; i++)
                ans.push_back(matrix[i][n - 1]);
            n--;

            if (k < m)
            {

                for (int j = n - 1; j >= l; j--)
                    ans.push_back(matrix[m - 1][j]);
                m--;
            }

            if (l < n)
            {

                for (int i = m - 1; i >= k; i--)
                    ans.push_back(matrix[i][l]);
                l++;
            }
        }

        return ans;
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
        vector<int> result = ob.spirallyTraverse(A, r, c);

        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
