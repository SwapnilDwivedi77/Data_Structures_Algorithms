// You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

#include <bits/stdc++.h>

//Function to count power of two in a number

int largestPowerOfTwo(int n)
{
    int power = 0;
    while ((1 << power) <= n)
    {
        power++;
    }
    return power - 1;
}

// Function to count set bits in the given number x
// n: input to count the number of set bits

int countSetBits(int n)
{
    if (n == 0)
        return 0;
    int power = largestPowerOfTwo(n);
    int bitsUptoPower = power * (1 << (power - 1));
    int msbFromPowerToN = n - (1 << power) + 1;

    int ans = bitsUptoPower + msbFromPowerToN + countSetBits(n - (1 << power));
    return ans;
}

// Driver Code

int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
       std:: cin >> n;
        std::cout << countSetBits(n) << std::endl;
    }
    return 0;
}
