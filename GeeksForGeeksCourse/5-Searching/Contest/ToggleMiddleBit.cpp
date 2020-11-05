/* You are given a number N. You need to toggle the middle bit of N in binary form
  * and print the result in decimal form.
  * If number of bits in binary form of N are odd then toggle the middle bit (Like 111 to 101).
  * If number of bits in binary form of N are even then toggle both the middle bits (Like 1111 to 1001)
  * Note: Toggling a bit means converting a 0 to 1 and vice versa. */

#include <bits/stdc++.h>
using namespace std;

int toggleMiddleBit(int n)
{

	unsigned int bits = 0;
	int temp = n, mid1, mid2;

	while (temp > 0)
	{
		bits++;
		temp >>= 1;
	}

	if (bits % 2 != 0)
	{

		mid1 = bits / 2;

		n = n ^ (1 << mid1);
	}

	else
	{

		mid1 = bits / 2;
		mid2 = mid1 - 1;
		n = n ^ (1 << mid1);
		n = n ^ (1 << mid2);
	}
	return n;
}

// Driver code
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		cout << toggleMiddleBit(n) << endl;
	}
	return 0;
}