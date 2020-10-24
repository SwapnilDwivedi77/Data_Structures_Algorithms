/* Given an unsorted array arr[] of size N,
 * rotate it by D elements in the counter-clockwise direction.  */

#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int d, int n){
    
    int rotate[d];
    
    for(int i=0;i<d;i++){
        
        rotate[i]=arr[i];
        
    }
    
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }
    
    for(int i=0;i<d;i++){
        arr[n-d+i]=rotate[i];
    }
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