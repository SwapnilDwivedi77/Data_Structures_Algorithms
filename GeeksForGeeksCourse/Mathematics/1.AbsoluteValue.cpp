// You are given an interger I. You need to print the absolute value of the interger I.

//Driver code
#include<iostream>
using namespace std;
int absolute(int I);

int main(){
int T; //number of testcases
cin >> T;

while(T--) {

int I;
cin>>I;
cout<<absolute(I)<<endl;
}
return 0;
}

// Should return absolute value of I
int absolute(int I) {

	return abs(I);
}