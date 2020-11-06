/* Given a square matrix of size N*N, print the sum of upper and lower triangular elements.
 * Upper Triangle consists of elements on the diagonal and above it. The lower triangle
 * consists of elements on the diagonal and below it. */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
	{
		int upperSum = 0, lowerSum = 0;

		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < n; j++)
			{

				if (j >= i)
					upperSum += matrix[i][j];
				if (j <= i)
					lowerSum += matrix[i][j];
			}
		}

		vector<int> result;
		result.push_back(upperSum);

		result.push_back(lowerSum);

		return result;
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
		vector<int> result = ob.sumTriangles(A, n);

		for (int i = 0; i < result.size(); ++i)
		{

			cout << result[i] << " ";
		}

		cout << endl;
	}
	return 0;
}