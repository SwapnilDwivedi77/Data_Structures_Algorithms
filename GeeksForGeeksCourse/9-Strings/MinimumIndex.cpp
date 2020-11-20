/* Given a string str and another string patt.
 * Find the character in patt that is present 
 * at the minimum index in str. If no character
 * of patt is present in str then print ‘No character present’.*/

#include <bits/stdc++.h>
using namespace std;

int minIndexChar(string str, string patt)
{
    // Your code here
    vector<int> v(26);
    v.assign(26, INT_MAX);
    int n = str.size();
    int minIdx = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        v[str[i] - 'a'] = min(v[str[i] - 'a'], i);
    }

    for (int i = 0; i < patt.size(); i++)
    {

        minIdx = min(minIdx, v[patt[i] - 'a']);
    }
    return minIdx == INT_MAX ? -1 : minIdx;
}

int main()
{
    string str, patt;
    cin >> str >> patt;

    int ans = minIndexChar(str, patt);
    cout << ans;
    ans == -1 ? cout << "No match" : cout << str[ans];
    return 0;
}