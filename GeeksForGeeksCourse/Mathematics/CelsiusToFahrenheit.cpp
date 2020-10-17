// Given a temperature in celsius C. You need to convert the given temperature to Fahrenheit.

#include<bits/stdc++.h>

using namespace std;

double celsiusToFahrenheit(int C) {

	double F = C*9/5  + 32 ;
	return F;
}

int main() {

int T; // Number of testcases
int C;
cin>>T;
while(T--) {
	cin >> C; // input of temperatures in celscius

	cout<< floor(celsiusToFahrenheit(C))<<endl;
}
return 0;
}