/* Given an array arr[] of size N where every element is in the range from 0 to n-1. 
 * Rearrange the given array so that arr[i] becomes arr[arr[i]]. */

#include<bits/stdc++.h>
using namespace std;

void arrange(long long arr[], int n) {

for(int i=0;i<n;i++){

	arr[i] = (arr[arr[i]]%n)*n + arr[i];
}

for(int i=0;i<n;i++) arr[i]/=n;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        long long arr[size];
        for (int i = 0; i < size ; i++)
            cin >> arr[i];
       

        arrange(arr,size);
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}