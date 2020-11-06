/* Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern */


#include<bits/stdc++.h>
using namespace std;

class Solution
{   
public:
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;
        
        for(int i=0;i<row;i++) {
            
            if(i%2==0) {
                
                for(int j =0;j<col;j++) result.push_back(matrix[i][j]); 
            }
            
            else for( int j=col-1;j>=0;j--) result.push_back(matrix[i][j]);
        }
        return result;
    }
};

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		vector<vector<int>> A(n);

		for (int i = 0; i < n; i++)
		{
			A[i].assign(n, 0);
			for (int j = 0; j < n; j++)
			{
				cin >> A[i][j];
			}
		}

		Solution ob;
		vector<int> result = ob.snakePattern(A);

		for (int i = 0; i < result.size(); ++i)
		{

			cout << result[i] << " ";
		}

		cout << endl;
	}
	return 0;
}