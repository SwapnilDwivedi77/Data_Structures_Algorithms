/* Given the total number of persons n and
 * a number k which indicates that k-1 persons are skipped and
 * kth person is killed in circle in a fixed direction.
 * The task is to choose the safe place in the circle so that
 * when you perform these operations starting from 1st place in the circle, 
 * you are the last one remaining and survive. */

#include <bits/stdc++.h>
using namespace std;

// This function returns the position of the last person alive
int kill(vector<int> v, int k, int index)
{
    if (v.size() == 1)
        return v[0];
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    int ans = kill(v, k, index);

    return ans;
}

int josephus(int n, int k)
{
    vector<int> v;

    for (int i = 1; i <= n; i++)
        v.push_back(i);

    int safe = kill(v, k - 1, 0);

    return safe;
}

// Driver code

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;
        cout << josephus(n, k);
    }
}
