//You are given two numbers a and b. You need to find the sum of a and b under modulo M (M = 109+7)

#include<iostream>
using namespace std;

//function returns sum of two numbers under modulo 10^9 + 7
int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    long long r = (a%M + b%M)%M;
    
    return r;
}

//Driver Code

int main() {

	int T;
	cin>>T;

	while(T--) {
		long long a;
		long long b;
		cin>>a>>b;
		cout<<sumUnderModulo(a,b)<<endl;
	}
	return 0;
}