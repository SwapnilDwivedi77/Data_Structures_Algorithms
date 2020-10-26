/* Given a sorted array of positive integers. 
 * Your task is to rearrange  the array elements alternatively i.e
 * first element should be max value, second should be min value, 
 * third should be second max, fourth should be second min and so on. */

// This function wants you to modify the given input
// array and no need to return anything
// arr: input array
// n: size of array
#include<bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n) 
{ 

	int minIdx=0, maxIdx = n-1;

	long long maxx = arr[n-1]+1;

	for(int i=0;i<n;i++) {

		if(i%2==0) {

			arr[i] = (arr[maxIdx] % maxx) * maxx + arr[i];
			maxIdx--;
		}
		if(i%2!=0) {
			arr[i] = (arr[minIdx] % maxx) * maxx +arr[i];
			minIdx++;
		}
	}

	for(int i=0;i<n;i++) {
		arr[i]/=maxx;
	}

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
        long long arr[size];
        for (int i = 0; i < size ; i++)
            cin >> arr[i];
       

        rearrange(arr,size);
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}