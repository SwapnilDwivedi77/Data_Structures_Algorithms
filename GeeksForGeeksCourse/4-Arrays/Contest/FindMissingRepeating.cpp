/* Given an unsorted array A[] of size N of positive integers.
 * One number 'a' from set {1, 2, …N} is missing and one number 'b'
 * occurs twice in array. The task is to find the repeating and the missing. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
	// finds the missing and repeating elements
	void findMissingRepeating(int *arr, int n)
	{
		int repeating = 0, missing = 0;
		for (int i = 0; i < n; i++)
		{

			if (arr[abs(arr[i]) - 1] > 0)
				arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
			else
				repeating = abs(arr[i]);
		}

		for (int i = 0; i < n; i++)
		{
			if (arr[i] > 0)
				missing = i + 1;
		}

		cout << repeating << " " << missing << endl;
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
		ob.findMissingRepeating(arr, n);
	}
	return 0;
}
