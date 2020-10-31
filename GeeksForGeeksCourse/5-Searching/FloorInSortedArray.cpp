/* Given a sorted array arr[] of size N without duplicates, and given a value x.
 * Floor of x is defined as the largest element K in arr[] such that K is smaller
 * than or equal to x. Find the index of K(0-based indexing).*/

#include<bits/stdc++.h>
using namespace std;
int findFloor(vector<long long> arr, long long n, long long x){
   

	int start =0,end = n-1,mid=0;

	while(start <=end) {

		mid = start+(end-start)/2;

	if(arr[mid] == x) return mid;
        
        if (mid > 0 && arr[mid - 1] <= x && x < arr[mid]) 
         return mid - 1; 
		if(x < arr[mid]) {
			end = mid-1;
		}
		if(x > arr[mid]){
			start = mid+1;
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

        long long size;
        cin >> size;
        vector<long long>arr;
        for (int i = 0; i < size; i++){
        	int l;
            cin >> l;
            arr.push_back(l);
        }
        long long x;
        cin >> x;

        int idx = findFloor(arr,size,x);

        cout << idx << endl;
    }
    return 0;
}