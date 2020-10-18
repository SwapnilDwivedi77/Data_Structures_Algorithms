/* Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, if the given number is 23 (00010111), 
 * it should be converted to 43(00101011). Here, every even position bit is swapped with adjacent bit on the right side(even position
 * bits are highlighted in the binary representation of 23), and every odd position bit is swapped with an adjacent on the left side. */

#include<bits/stdc++.h>
using namespace std;

// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
	unsigned int evenBits = n & 0xAAAAAAAA;
	unsigned int oddBits  = n & 0x55555555;
	
	evenBits >>= 1;
	oddBits  <<= 1;
	
	return evenBits | oddBits;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		unsigned int n;
		cin>>n;
		cout<<swapBits(n)<<endl;
	}
	return 0;
}