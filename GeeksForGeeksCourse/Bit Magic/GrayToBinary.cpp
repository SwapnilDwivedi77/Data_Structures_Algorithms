// Given N in Gray code equivalent. Find its binary equivalent.
//Note: We need to find the binary equivalent of the given gray code and return the decimal equivalent of the binary representation.

#include <bits/stdc++.h>
using namespace std;

// Function returns decimal number for its binary equivalent

int convertToDecimal(vector<int> grayCode)
{

    int value = 0;

    for (int i = grayCode.size() - 1, j = 0; i >= 0; i--, j++)
    {

        value = value + grayCode[i] * pow(2, j);
    }

    return value;
}

// Function returns Gray code equivalent for a binary number
int grayToBinary(int n)
{
    int bit = 0;
    vector<int> binary, grey;

    if (n == 0)
        return 0;

    while (n)
    {

        bit = n % 2;
        grey.push_back(bit);
        n /= 2;
    }

    reverse(grey.begin(), grey.end());

    binary.push_back(grey[0]);
    for (int i = 1; i < grey.size(); i++)

        binary.push_back(grey[i] ^ binary[i - 1]);

    int ans = convertToDecimal(binary);

    return ans;
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
        cout << grayToBinary(n) << endl;
    }
}