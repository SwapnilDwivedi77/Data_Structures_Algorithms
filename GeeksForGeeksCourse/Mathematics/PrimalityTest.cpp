//For a given number N check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.

#include<bits/stdc++.h>

using namespace std;


bool isPrime(int N) {

	 for(int i=2;i<=N/2;i++){
        if(N%i==0) return false;
        
    }
    return true;
}

int main() {

	int T;
	cin>>T;
	while(T--) {

		int N;
		cin>>N;

		if(isPrime(N)) cout<<"Yes";

		else cout<<"No";

		cout<<endl;
	}

return 0;
}