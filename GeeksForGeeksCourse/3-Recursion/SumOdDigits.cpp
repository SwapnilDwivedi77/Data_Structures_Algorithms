// You are given a number n. You need to find the sum of digits of n.

#include<bits/stdc++.h>
using namespace std;

// Function returns the sum of digits of a number n
int sumOfDigits(int n)
{
    if(n == 0) return 0;
    int sum = n%10;
   return sum +  sumOfDigits(n/10);
    
}

// Driver code 

int main() {
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		cout << sumOfDigits(n) << endl;
	}

	return 0;
}