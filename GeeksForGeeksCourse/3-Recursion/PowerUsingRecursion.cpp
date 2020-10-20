/* You don't need to read input or print anything.
 * You only need to complete the function RecursivePower()
 * that takes n and p as parameters and returns np. */

#include <bits/stdc++.h>
using namespace std;

int RecursivePower(int n, int p)
{
    if (p == 0)
        return 1;

    return n * RecursivePower(n, p - 1);
}

//Driver code

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, p;
        cin >> n >> p;
        cout << RecursivePower(n, p);
    }
}