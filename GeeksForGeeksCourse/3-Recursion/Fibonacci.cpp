/* You are given a number n. You need to find nth Fibonacci number.
 * F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1 */

#include<bits/stdc++.h>
using namespace std;

// Function returns nth fibonacci number
long long fibonacci(int n)
{
    if(n <=2) return 1;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

// Driver code

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin>>n;
		cout << fibonacci(n) << endl;
	}
	return 0;
}
