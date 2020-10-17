//Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
//Note: If there is no set bit in the integer N, then return 0 from the function.  

#include<bits/stdc++.h>
using namespace std;


/*  function to find position of first set 
    bit in the given number
 * n: given input for which we want to get
      the position of first set bit
 */

 unsigned int getFirstSetBit(int n){
    
    // Your code here
    return log2( n & -n) +1;
}

//Driver code

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n; 
		printf("%u\n",getFirstSetBit(n) ); 
	}
	return 0;
}