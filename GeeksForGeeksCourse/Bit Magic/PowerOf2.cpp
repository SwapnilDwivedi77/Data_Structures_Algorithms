//Given a positive integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.

#include <bits/stdc++.h>
using namespace std;

// Function to check power of two
bool isPowerofTwo(long long n)
{

    return ceil(log2(n)) == floor(log2(n));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n <= 0)
        {
            cout << "No" << endl;
            continue;
        }
        if (isPowerofTwo(n))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}