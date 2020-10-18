/*You are given a number n. You need to find the digital root of n.
 * DigitalRoot of a number is the recursive sum of its digits until 
 * we get a single digit number. */

#include <bits/stdc++.h>
using namespace std;

// Utility function that returns the sum of digits of a number passed as argument
int sumOfDigits(int n)
{

    if (n / 10 == 0)
        return n;
    else
        return n % 10 + sumOfDigits(n / 10);
}

// Function to find the digital root

int digitalRoot(int n)
{
    //Your code here
    if (n / 10 == 0)
        return n;
    else
        return digitalRoot(sumOfDigits(n));
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
        cout << digitalRoot(n) << endl;
    }
    return 0;
}