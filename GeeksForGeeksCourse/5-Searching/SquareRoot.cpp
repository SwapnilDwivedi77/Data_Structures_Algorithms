/* Given an integer x. The task is to find the square root of x.
 *  If x is not a perfect square, then return floor(√x). */

#include<bits/stdc++.h>
using namespace std;


// Function returns the square root of x
long long int floorSqrt(long long int x) 
{
		long long i=0,result = 0;
		if(x ==1 || x == 0) return x;
		while(result <= x) {
			i++;
			result = i*i;
		}
		return i-1;
}

// Driver code
int main () {

	long long  t;
	cin >>t;

	while(t--) {
		int n;
		cin >>n ;
		cout << floorSqrt(n);
	}
}