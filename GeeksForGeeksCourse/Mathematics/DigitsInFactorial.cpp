// Given an integer N. The task is to find the number of digits that appear in its factorial, where factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.

#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int n)
{	
	double M_E=2.71828,M_PI=3.141593;
	
    if(n <=1) return 1;
    double x = ((n * log10(n / M_E) +  
                 log10(2 * M_PI * n) / 
                 2.0)); 
  
    return floor(x) + 1; 
}

int main() {

	int T;

	cin >> T;

	while(T--) {

		int N;
		cin >> N;
		cout << digitsInFactorial(N) <<endl;
	}
	return 0;
}