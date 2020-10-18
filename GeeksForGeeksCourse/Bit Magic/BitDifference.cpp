// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

#include <bits/stdc++.h>
using namespace std;

// Function to find number of bits to be flip
// to convert A to B
int countBitsFlip(int a, int b)
{
    int num = a ^ b;

    unsigned int count = 0;
    while (num)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

//Driver function

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        cout << countBitsFlip(a, b) << endl;
    }
    return 0;
}