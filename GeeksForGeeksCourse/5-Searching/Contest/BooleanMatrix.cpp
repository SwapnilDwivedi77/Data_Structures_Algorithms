/* You are given a matrix Mat of m rows and n columns.
 * The matrix is boolean so the elements of the matrix can 
 * only be either 0 or 1.
 * Now, if any row of the matrix contains a 1, then you need
 * to fill that whole row with 1. After doing the mentioned operation,
 * you need to print the modified matrix. */

#include <iostream>
using namespace std;

int mat[901][901];
int booleanMatrix(int row, int col)
{

    int temp[row];

    for (int i = 0; i < row; i++)
        temp[i] = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (mat[i][j] == 1)
                temp[i] = 1;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (temp[i] == 1)
                mat[i][j] = 1;
        }
    }
}

int main()
{
    

    int t;
    cin >> t;

    while (t--)
    {

        int r, c;
        cin >> r >> c;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                cin >> mat[i][j];
        }

        booleanMatrix(r, c);

        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {

                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}