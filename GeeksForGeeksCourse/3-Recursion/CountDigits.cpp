// You are given a number n. You need to find the count of digits in n.

#include<bits/stdc++.h>
using namespace std;

//Function is called recursively to count digits of a number
int countDigits(int n)
{   
    int count = 0;
   if(n!=0)
   {
       count++;
   }
   if(n < 10)
   return 1;   //this case handles where n=0 is given in input
   return (count + countDigits(n/10));
}

// Driver code
int main() {
	int T;
	cin>>T;
	while(T--) {
		int n; 
		cin>>n;
		cout <<countDigits(n);
	} return 0;
}