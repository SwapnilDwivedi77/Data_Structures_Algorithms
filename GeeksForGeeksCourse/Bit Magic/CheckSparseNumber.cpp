//Given a number N. The task is to check whether it is sparse or not.
// A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.

#include <bits/stdc++.h>
using namespace std;

// function to check if the number is sparse
// n : is the number to check if it is sparse
bool isSparse(int n)
{

    int temp = n >> 1;

    if (n & temp)
        return false;
    return true;
}

// Driver code

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << isSparse(n);
    }

    return 0;
}