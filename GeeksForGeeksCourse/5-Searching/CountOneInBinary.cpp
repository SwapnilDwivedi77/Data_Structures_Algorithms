 /* Given a binary sorted non-increasing array of 1s and 0s.
  * You need to print the count of 1s in the binary array. */

#include<bits/stdc++.h>
using namespace std;

// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int N)
{
    
    // Your code here 
    int i=0;
    while(arr[i]==1){
            
            i++;
        }
    
    return i;
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

        int ones = countOnes(arr, size);

        cout << ones << endl;
    }
    return 0;
}