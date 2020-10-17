// Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.

#include<bits/stdc++.h>
using namespace std;

double termOfGP(int A,int B,int N)
{
    //Your code here
    double a= A;
    double b = B;
    double  r = b/a;
    double an = A*pow(r,N-1.0);
    
    return an;
    
}

int main() {

	int T;
	cin >> T;

	for(int i=0; i<T; i++) {

		int A,B;
		cin>>A>>B;
		int N;
		cin >> N;

		cout << floor(termOfGP(A,B,N))<<endl;
	}
	return 0;
}