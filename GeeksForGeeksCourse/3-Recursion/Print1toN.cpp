// Print numbers from 1 to N without the help of loops.

#include <bits/stdc++.h>
using namespace std;

// Funtion called recursively to print 1 to N

void printNos(int N)
{
    if (N == 0)
        return;
    printNos(N - 1);
    cout << N << " ";
}

// Driver code

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        printNos(N);
        cout << endl;
    }
    return 0;
}