/* You are given an array of N+2 integer elements.
 * All elements of the array are in range 1 to N. 
 * Also, all elements occur once except two numbers
 * which occur twice. Find the two repeating numbers. */

#include <bits/stdc++.h>
using namespace std;
pair<int, int> twoRepeated(int arr[], int N)
{
    int size = N + 2;
    vector<int> temp;
    for (int i = 0; i < size; i++)
    {

        if (arr[abs(arr[i])] > 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];

        else
        {
            temp.push_back(abs(arr[i]));
        }
    }

    pair<int, int> result;
    result.first = temp[0];
    result.second = temp[1];
    return result;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        int arr[size + 2];
        for (int i = 0; i < size + 2; i++)
            cin >> arr[i];

        pair<int, int> repeated = twoRepeated(arr, size);

        cout << repeated.first << " " << repeated.second << endl;
    }
    return 0;
}