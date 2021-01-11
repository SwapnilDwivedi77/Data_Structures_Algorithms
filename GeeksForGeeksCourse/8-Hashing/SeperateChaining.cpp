/* Given an array and a hashtable size, you have to fill 
   the elements of the array into a hash table of given size. */

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> separateChaining (int hashSize, int arr[], int sizeOfArray) {

	vector<vector<int>> ans(hashSize);
	int idx;

	for(int i=0;i<sizeOfArray;i++) {

		idx = arr[i]%hashSize;
		ans[idx].push_back(arr[i]);
	}
	 return ans;
}

int main() {

	int t;
	cin>>t;

	while(t--) {
		int hashSize;
		cin>>hashSize;

		int sizeOfArray;
		cin >> sizeOfArray;
		int arr[sizeOfArray];

		for(int i=0; i<sizeOfArray; i++) cin>>arr[i];

		vector<vector<int>> hashTable;
	    hashTable = separateChaining(hashSize , arr , sizeOfArray);
	    for(int i=0; i < hashTable.size();i++){

	    	if(hashTable[i].size() >0) {

	    		cout<<i<<"->";

	    		for(int j=0; j<hashTable[i].size()-1;j++) {
	    			cout<<hashTable[i][j]<<"->";
	    		}
	    		cout<<hashTable[i][hashTable[i].size()-1];
	    		cout<<endl;
	    	}
	    }
	}
}