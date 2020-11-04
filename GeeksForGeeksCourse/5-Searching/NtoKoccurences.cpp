/* Given an array arr[] of size N and an element k.
 * The task is to find all elements in array that appear
  more than n/k times. */

#include <bits/stdc++.h>
using namespace std;

// struct used to map the elements and its occurence
struct mapOccurance
{
    int value = -1;
    int occur = 0;
};

// Function to find element with count more than n/k times
// arr: input array

int countOccurence(int arr[], int n, int k)
{

    int maxElement = arr[0];

    for (int i = 1; i < n; i++)
        maxElement = max(arr[i], maxElement);

    mapOccurance obj[maxElement];

    for (int i = 0; i < n; i++)
    {
        obj[arr[i]].occur = 0;
    }
    for (int i = 0; i < n; i++)
    {

        obj[arr[i]].occur += 1;
    }
    int count = 0;
    for (int i = 0; i <= maxElement; i++)
    {

        if (obj[i].occur > (n / k))
            count++;
    }
    return count;
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
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        int k;
        cin >> k;

        cout << countOccurence(arr, size, k) << endl;
    }
    return 0;
}