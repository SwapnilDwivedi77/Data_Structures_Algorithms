/* You are given N number of books. Every ith book has Ai number of pages. 
 * You have to allocate books to M number of students. There can be many ways
 * or permutations to do so. In each permutation, one of the M students will 
 * be allocated the maximum number of pages. Out of all these permutations,
 * the task is to find that particular permutation in which the maximum number
 * of pages allocated to a student is minimum of those in all the other permutations
 * and print this minimum value. 
 * Each book will be allocated to exactly one student.
 * Each student has to be allocated at least one book.
 * Note: Return -1 if a valid assignment is not possible, and allotment should be in
 * contiguous order (see the explanation for better understanding). */

#include <bits/stdc++.h>
using namespace std;

bool isValid(int *arr, int n, int m, int mx)
{

    int students = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        if (sum > mx)
        {
            students++;
            sum = arr[i];
        }

        if (students > m)
            return false;
    }

    return true;
}

int findPages(int *arr, int n, int m)
{

    if (m > n)
        return -1;

    int minimumPages = arr[0], totalPages = 0;

    for (int i = 0; i < n; i++)
    {

        minimumPages = max(arr[i], minimumPages);
        totalPages += arr[i];
    }

    int start = minimumPages, end = totalPages, result = -1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (isValid(arr, n, m, mid))
        {

            result = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return result;
}

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
        int s;
        cin >> s;

        cout << findPages(arr, size, s);
    }
    return 0;
}
