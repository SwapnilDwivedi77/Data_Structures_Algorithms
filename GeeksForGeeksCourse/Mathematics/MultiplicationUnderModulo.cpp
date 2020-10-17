//You are given two numbers a and b. You need to find the multiplication of a and b under modulo M (M as 109+7).

#include<iostream>
using namespace std;

//function returns multiplication of two numbers under modulo 10^9 + 7
int multiplicationUnderModulo(long long a,long long b)
{
    int M=1000000007;
    a=a%M;
    b=b%M;
    long long r =(a*b)%M;
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
		cout<<multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}