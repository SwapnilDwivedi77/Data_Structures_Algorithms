/* You are given an array arr[] of size N. You are also given two elements x and y.
 * Now, you need to tell which element (x or y) appears most in the array. In other words,
 * return the element, x or y, that has higher frequency in the array. If both elements have
 * the same frequency, then just return the smaller element.*/

#include <bits/stdc++.h>
using namespace std;

int MajorityWins(int arr[], int n, int x, int y)
{

    int count_x = 0, count_y = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == x)
            count_x++;
        if (arr[i] == y)
            count_y++;
    }

    if (count_y == count_x)
        return min(x, y);
    else if (count_x > count_y)
        return x;
    else
        return y;
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
        int x, y;
        cin >> x >> y;

        cout << MajorityWins(arr, sizeOfArray, x, y);
    }
}