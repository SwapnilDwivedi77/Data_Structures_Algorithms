/* Given an array A of N elements. Find the majority element in the array.
 * A majority element in an array A of size N is an element that appears more than N/2 times in the array. */

#include <bits/stdc++.h>
using namespace std;
// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int arr[], int n)
{
    int candidate = 0, counter = 1;

    for (int i = 1; i < n; i++)
    {

        if (counter == 0)
        {
            candidate = i;
            counter = 1;
        }
        else 
        if (arr[candidate] == arr[i])
            counter++;
        else
            counter--;
    }

    int occurance = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[candidate])
            occurance++;
    }

    if (occurance > n / 2)
        return arr[candidate];

    return -1;
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

        int ones = majorityElement(arr, size);

        cout << ones << endl;
    }
    return 0;
}