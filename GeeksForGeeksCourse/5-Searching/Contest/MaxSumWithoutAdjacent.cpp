/* Given an array Arr of size N containing positive integers.
 * Find the maximum sum of a subsequence such that no two numbers
 * in the sequence should be adjacent in the array. */

#include <bits/stdc++.h>
using namespace std;


class Solution
{

public:
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n)
	{
		int incl = arr[0], excl = 0;

		for (int i = 1; i < n; i++)
		{

			int temp = incl;
			incl = max(excl + arr[i], incl);
			excl = temp;
		}

		return incl;
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
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		Solution ob;
		auto ans = ob.findMaxSum(arr, n);
		cout << ans << endl;
	}
	return 0;
}
