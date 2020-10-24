/* Given an unsorted array arr[] of size N,
 * rotate it by D elements in the counter-clockwise direction.  */

#include <bits/stdc++.h>
using namespace std;

// utility function that reverses the array from a start index till end index
void reverse(int arr[], int start, int end)
{

    for (int i = start, j = end; i < j; i++, j--)
    {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

// Rotates the array in anti clockwise direction k times
void rotateArray(int arr[], int k, int n)
{

    reverse(arr, n - k, n - 1); // reverse the last k elements of array
    reverse(arr, 0, n - k - 1); // reverse first n-k elements of array
    reverse(arr, 0, n - 1);     // reverse the entire array
}

// Driver code

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int sizeOfArray, d;
        cin >> sizeOfArray >> d;
        int arr[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
        {
            cin >> arr[i];
        }

        rotateArray(arr, d, sizeOfArray);
        for (int i = 0; i < sizeOfArray; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}