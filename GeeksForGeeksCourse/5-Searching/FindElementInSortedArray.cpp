/* Given a sorted array and an integer element.
 * The task is to check if the element is present in the array or not. */


#include<bits/stdc++.h>
using namespace std;
// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
int searchInSorted(int arr[], int N, int k) 
{ 

   // Your code here
   int start=0,end=N-1,mid=0;
   
   while(start <= end) {
       
       mid = (start+end)/2;
       
       if(k==arr[mid]) return 1;
       
       if(k>arr[mid]) {
           start = mid+1;
       }
       
       if(k < arr[mid]) end = mid-1;
       
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

        int searchIdx = searchInSorted(arr, size,X);

        cout << searchIdx << endl;
    }
    return 0;
}