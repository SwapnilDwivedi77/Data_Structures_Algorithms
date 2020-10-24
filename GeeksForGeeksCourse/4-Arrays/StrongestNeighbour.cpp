/* Given an array arr[] of N positive integers. 
 * The task is to find the maximum for every adjacent pairs in the array. */
#include<bits/stdc++.h>
using namespace std;

// Prints the max of all adjacent pairs in the array
void findStrongestNeighbour(int arr[], int size) {

	for(int i=0;i<size-1;i++) 
		cout<< max(arr[i],arr[i+1]) <<" " ;
}

int main() {

	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		int arr[n];

		for(int i=0;i<n;i++) cin>>arr[i];

		findStrongestNeighbour(arr,n);
	}
}