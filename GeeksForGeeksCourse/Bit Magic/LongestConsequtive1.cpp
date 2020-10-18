// Given a number N. The task is to find the length of the longest consecutive 1s in its binary representation.

#include <bits/stdc++.h>
using namespace std;

/*  Function to calculate the largest consecutive ones
*   x: given input to calculate the largest consecutive ones
*/

int maxConsecutiveOnes(int x)
{
    // Initialize result
    int count = 0;

    // Count the number of iterations to
    // reach x = 0.
    while (x != 0)
    {
        // This operation reduces length
        // of every sequence of 1s by one.
        x = (x & (x << 1));

        count++;
    }

    return count;
}

// Driver code

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        cout << maxConsecutiveOnes(n) << endl;
    }
    return 0;
}