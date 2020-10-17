#include<bits/stdc++.h>
using namespace std;

long long factorial(int N) {

	long long f = 1;
	for (int i=1; i <= N; i++)
		f*=i;
	return f;
}

int main() {

	int T,N;
	cin >> T; //input number of testcases

	while(T--) {
		cin >> N;
		cout << factorial(N) << endl;
	}
	return 0;
}