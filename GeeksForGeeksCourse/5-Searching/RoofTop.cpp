/* You are given heights of consecutive buildings. You can move from the roof of a 
 * building to the roof of next adjacent building. You need to find the maximum number 
 * of consecutive steps you can put forward such that you gain an increase in altitude with each step. */

#include <bits/stdc++.h>
using namespace std;

int maxStep(int arr[], int N)
{

    int steps = 0, maxSteps = 0;
    for (int i = 0; i < N - 1; i++)
    {

        if (arr[i] > arr[i + 1])
            steps = 0;
        else if (arr[i] == arr[i + 1])
            steps--;
        else
            steps++;

        maxSteps = max(steps, maxSteps);
    }

    return maxSteps;
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cout << maxStep(arr, size) << endl;
    }
    return 0;
}