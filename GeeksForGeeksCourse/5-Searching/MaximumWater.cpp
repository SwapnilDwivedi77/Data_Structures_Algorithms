/* Given an integer array representing the heights of N buildings,
 * the task is to delete N-2 buildings such that the water that can be
 * trapped between the remaining two building is maximum.
 * Note: The total water trapped between two buildings is gap between
 * them (number of buildings removed) multiplied by height of the smaller building. */

#include <bits/stdc++.h>
using namespace std;

int maxWater(int height[], int n)
{
    int i = 0, j = n - 1, tempVol = 0, maxVol = 0;

    while (i < j)
    {

        tempVol = min(height[i], height[j]) * (j - i - 1);
        maxVol = max(tempVol, maxVol);
        if (height[i] < height[j])
            i++;
        else
            j--;
    }

    return maxVol;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cout << maxWater(arr, size) << endl;
    }
    return 0;
}