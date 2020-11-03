/* Given two sorted arrays arr[] and brr[] of sizes N and M respectively.
 * The task is to find the median of the two arrays when they get merged. */

#include <bits/stdc++.h>
using namespace std;

int findMedian(int arr[], int n, int brr[], int m)
{

    //if arr length is greater than switch them so that arr is smaller than brr.

    if (n > m)
        return findMedian(brr, m, arr, n);

    int low = 0, high = n;

    while (low <= high)
    {

        int partitionX = (low + high) / 2;
        int partitionY = (n + m + 1) / 2 - partitionX;

        //if partitionX is 0 it means nothing is there on left side. Use INT_MIN for maxLeftX
        //if partitionX is length of input then there is nothing on right side. Use MAX_INT for minRightX

        int maxLeftX = (partitionX == 0) ? INT_MIN : arr[partitionX - 1];
        int minRightX = (partitionX == n) ? INT_MAX : arr[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : brr[partitionY - 1];
        int minRightY = (partitionY == m) ? INT_MAX : brr[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX)
        {
            //We have partitioned array at correct place
            // Now get max of left elements and min of right elements to get the median in case of even length combined array size
            // or get max of left for odd length combined array size.

            if ((m + n) % 2 == 0)
            {

                return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2;
            }

            else
                return max(maxLeftY, maxLeftX);
        }

        else if (maxLeftX > minRightY)
        { //we are too far on right side for partitionX. Go on left side.

            high = partitionX - 1;
        }

        else //we are too far on left side for partitionX. Go on right side.
            low = partitionX + 1;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;
        int arr[n], brr[m];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < m; i++)
            cin >> brr[i];

        int median = findMedian(arr, n, brr, m);
        cout << median;
    }
    return 0;
}