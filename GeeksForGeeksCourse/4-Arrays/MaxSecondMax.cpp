/* Given an array arr[] of size N of positive integers which may have duplicates.
 * The task is to find the maximum and second maximum from the array, 
 * and both of them should be distinct, so If no second max exists, then the second max will be -1*/

#include <bits/stdc++.h>
using namespace std;

//Functions returns a vector containing maximum and second maximum value of the array
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[])
{
    int max = arr[0], max2 = -1;

    for (int i = 0; i < sizeOfArray; i++)
    {

        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        if (arr[i] > max2 && arr[i] != max)
            max2 = arr[i];
    }
    vector<int> ans;

    ans.push_back(max);
    ans.push_back(max2);

    return ans;
}

//Driver code

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
            cin >> arr[i];

        vector<int> maximum = largestAndSecondLargest(sizeOfArray, arr);
        cout << maximum[0] << " " << maximum[1];
    }
}