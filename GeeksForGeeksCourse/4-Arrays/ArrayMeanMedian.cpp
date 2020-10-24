/* Given an array a[ ] of size N. The task is to find the median and mean of the array elements.
 * Mean is average of the numbers and median is the element which is smaller than half of the 
 * elements and greater than remaining half.  If there are odd elements, the median is simply 
 * the middle element in the sorted array. If there are even elements, then the median is floor
 * of average of two middle numbers in the sorted array. If mean is floating point number, then 
 * we need to print floor of it.*/

#include <bits/stdc++.h>
using namespace std;

int mean(int arr[], int N)
{

    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += arr[i];

    return floor(sum / N);
}

int median(int arr[], int N)
{

    int idx = 0;
    sort(arr, arr + N);

    if (N % 2 != 0)
    {
        idx = ceil(N / 2);
        return arr[idx];
    }

    else
    {
        idx = N / 2;
        return floor(arr[idx] + arr[idx - 1]) / 2;
    }
}

//Driver code

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];

        cout << mean(arr, sizeOfArray) << " " << median(arr, sizeOfArray);
    }
}