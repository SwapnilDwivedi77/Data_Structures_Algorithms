// You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.

#include <bits/stdc++.h>
using namespace std;

// Function returns the decimal number from its binary represntation
int convertToDecimal(vector<int> grayCode)
{

    int value = 0;

    for (int i = grayCode.size() - 1, j = 0; i >= 0; i--, j++)
    {

        value = value + grayCode[i] * pow(2, j);
    }

    return value;
}

// Function returns the gray code equivalent for a decimal number
int greyConverter(int n)
{

    int bit = 0;
    vector<int> binary, grey;

    if (n == 0)
        return 0;

    while (n)
    {

        bit = n % 2;
        binary.push_back(bit);
        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    grey.push_back(binary[0]);
    for (int i = 1; i < binary.size(); i++)

        grey.push_back(binary[i] ^ binary[i - 1]);

    int ans = convertToDecimal(grey);

    return ans;
}

// Driver code

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {

        cin >> n;
        cout << greyConverter(n) << endl;
    }
    return 0;
}
