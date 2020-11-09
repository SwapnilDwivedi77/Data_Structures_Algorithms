/* A beautiful matrix is a matrix in which the sum of elements in each row and column is equal.
 * Given a square matrix of size NxN. Find the minimum number of operation(s) that are required
 * to make the matrix beautiful. In one operation you can increment the value of any one cell by 1. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinOpeartion(vector<vector<int>> matrix, int n)
    {

        vector<int> rowSum(n);
        vector<int> colSum(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                rowSum[i] += matrix[i][j];
                colSum[j] += matrix[i][j];
            }
        }

        int maxSum = 0;
        for (int i = 0; i < n; ++i)
        {
            maxSum = max(maxSum, rowSum[i]);
            maxSum = max(maxSum, colSum[i]);
        }

        int count = 0;

        for (int i = 0, j = 0; i < n && j < n;)
        {

            int diff = min(maxSum - rowSum[i], maxSum - colSum[j]);

            matrix[i][j] += diff;
            rowSum[i] += diff;
            colSum[j] += diff;
            if (rowSum[i] == maxSum)
                i++;
            if (colSum[j] == maxSum)
                j++;
            count += diff;
        }
        return count;
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
        int steps = ob.findMinOpeartion(A, n);

        cout << steps;

        cout << endl;
    }
    return 0;
}
