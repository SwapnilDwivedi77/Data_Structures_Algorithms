/* Given an array A of positive integers. Your task is to find the leaders in the array.
 * Note: An element of array is leader if it is greater than or equal to all the elements to its right side.
 * Also, the rightmost element is always a leader. */

#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(int arr[], int n)
{

    int leader = arr[n - 1];
    vector<int> result;
    result.push_back(leader);
    for (int i = n - 2; i >= 0; i--)
    {

        if (arr[i] > leader)
        {
            leader = arr[i];
            result.push_back(leader);
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
        {
            cin >> arr[i];
        }

        vector<int> ans = leaders(arr, sizeOfArray);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}