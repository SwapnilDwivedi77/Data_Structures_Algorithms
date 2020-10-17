// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.

#include<bits/stdc++.h>
using namespace std;

// checks a number is prime or not
bool isPrime(int n){
    
    int limit = (int)sqrt(n);
    
    for(int i = 2; i <= limit; i++){
    
    if(n % i == 0){
    return false;
    }
    }
    return true;
}

//checks if a number has exactly 3 devisors
int exactly3Divisors(int N)
{
    int count = 1;
    
    if(N <= 3){
    return 0;
    }
    
    for(int i = 3; i <= sqrt(N); i++ ){
    
    if(isPrime(i) && (i * i) <= N){
    count++;
    }
    }
    return count;
} 

//Driver function

int main() {

	int T;
	cin>>T; //number of testcases

	while(T--) {

		int N;
		cin >> N;
		cout<<exactly3Divisors(N)<<endl;
	}

	return 0;
}