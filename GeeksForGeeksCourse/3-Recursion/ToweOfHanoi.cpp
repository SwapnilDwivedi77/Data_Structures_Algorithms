/* The tower of Hanoi is a famous puzzle where we have three rods and N disks.
 * The objective of the puzzle is to move the entire stack to another rod.
 * You are given the number of discs N. Initially, these discs are in the rod 1.
 * You need to print all the steps of discs movement so that all the discs reach the 3rd rod.
 * Also, you need to find the total moves.
 * Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N.
  Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function prints the steps and returns total number of steps
    long long toh(int N, int from, int to, int aux)
    {
        long long moves = pow(2, N) - 1;

        if (N > 0 && N < 2)
        {
            cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;

            return moves;
        }
        toh(N - 1, from, aux, to);

        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;

        toh(N - 1, aux, to, from);

        return moves;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        Solution ob;
        long long moves = ob.toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}