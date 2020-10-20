/* You are given an array arr(0-based index). The size of the array is given by sizeOfArray.
 * You need to insert an element at given index and print the modified array.*/

#include <bits/stdc++.h>
using namespace std;

void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
{
    for (int i = sizeOfArray - 1; i >= index; i--)
        arr[i + 1] = arr[i];

    arr[index] = element;
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
        for (int i = 0; i < sizeOfArray - 1; i++)
            cin >> arr[i];
        int index;
        cin >> index;
        int element;
        cin >> element;

        insertAtIndex(arr, sizeOfArray, index, element);
        for (int i = 0; i < sizeOfArray; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}