/* Lucky numbers are subset of integers. Rather than going into much theory, let us see the process of arriving at lucky numbers,
 * Take the set of integers 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……
 * First, delete every second number, we get following reduced set. 1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………
 * Now, delete every third number, we get 1, 3, 7, 9, 13, 15, 19,….….
 * Continue this process indefinitely……
 * Any number that does NOT get deleted due to above process is called “lucky”.
 * Check for a number n if its lucky or not */

#include <bits/stdc++.h>
using namespace std;

//funtion returns boolean value if number is lucky or not
bool isLucky(int n, int &counter)
{

    int nextPos = n;

    if (counter > nextPos)
        return true;
    if (nextPos % counter == 0)
        return false;

    nextPos -= nextPos / counter;
    counter++;

    return isLucky(nextPos, counter);
}

//Driver code
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int counter = 2;

        cout << isLucky(n, counter);
    }
}