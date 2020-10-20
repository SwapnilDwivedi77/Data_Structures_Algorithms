/* You are given an array arr. The size of the array is given by sizeOfArray. 
 * You need to insert an element at the end.*/

#include <bits/stdc++.h>
using namespace std;

/* insert the given element at the end, i.e.,
 * at index sizeOfArray - 1. Assume that the array 
 * already has sizeOfArray - 1 elements.  */

void insertAtEnd(int arr[0], int sizeOfArray, int element)
{
    arr[sizeOfArray - 1] = element;
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
        int element;
        cin >> element;

        insertAtEnd(arr, sizeOfArray, element);
        for (int i = 0; i < sizeOfArray; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}