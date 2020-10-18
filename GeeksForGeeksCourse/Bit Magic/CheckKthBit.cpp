 /* a number N and a bit number K, 
 check if Kth bit of N is set or not. 
 A bit is called set if it is 1. Position 
 of set bit '1' should be indexed starting 
 with 0 from LSB side in binary representation 
 of the number.*/

#include<bits/stdc++.h>
using namespace std;

/*Function checks if bit at kth position is set or not,
 and returns a boolean value*/
bool checkKthBit(int n, int k){
     return (n&(1<<k)) ;
    }

  // Driver function

  int main() {

  	int t;
  	cin>>t;
  	while(t--) {
  		long long n; // number
  		cin>>n;
  		int k; // bit number k
  		cin>>k;

  		if(checkKthBit(n,k))
  			cout<< "Yes" <<endl;
  		else 
  			cout << "No" <<endl;
  	}
  	return 0;
  }