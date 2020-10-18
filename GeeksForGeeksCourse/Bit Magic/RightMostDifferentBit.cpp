// Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

#include<bits/stdc++.h>
using namespace std;

/*  Function to find the first position with different bits
*   This function returns the position with different bit
*/
int posOfRightMostDiffBit(int m, int n)
{
    
    int temp = m ^ n;

    return log2(temp & -temp)+1;
    
}

// Driver method

int main() {

	int T;
	cin>>T;

	while(T--) {
		int m,n;
		cin>>m>>n;
		cout << posOfRightMostDiffBit(m,n)<<endl;
	}

	return 0;
}