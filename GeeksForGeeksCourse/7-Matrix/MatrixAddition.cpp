/* Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively. Add A and B.  */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	vector<vector<int>> sumMatrix(const vector<vector<int>> &A, const vector<vector<int>> &B)
	{

		int row = A.size();
		vector<vector<int>> sum;

		if (A.size() != B.size() || A[0].size() != B[0].size())
		{
			return sum;
		}

		int col = A[0].size();

		vector<int> temp;

		for (int i = 0; i < row; i++)
		{
			temp.assign(col, 0);

			for (int j = 0; j < col; j++)
			{

				temp[j] = A[i][j] + B[i][j];
			}
			sum.push_back(temp);
		}
		return sum;
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
		vector<vector<int>> result = ob.sumMatrix(A, B);
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