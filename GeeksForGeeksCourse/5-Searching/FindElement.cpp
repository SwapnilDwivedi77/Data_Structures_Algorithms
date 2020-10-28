/* Given an integer array and another integer element.
 * The task is to find if the given element is present in array or not. */

#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int N, int X)
{
   
    for(int i=0;i<N;i++){
        
        if(arr[i]==X) 
        {
            return i;
        }
    }
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

        int X;
        cin >> X;

        int searchIdx = search(arr, size,X);

        cout << searchIdx << endl;
    }
    return 0;
}