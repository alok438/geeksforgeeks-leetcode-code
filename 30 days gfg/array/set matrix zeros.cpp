class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		int row = matrix.size();
		int col = matrix[0].size();
		int c = 1, i, j;
		for (i = 0; i < row; i++) {
			if (matrix[i][0] == 0)
				c = 0;
			for (j = 1; j < col; j++)
				if (matrix[i][j] == 0)
					matrix[i][0] = matrix[0][j] = 0;
		}
		for (i = row - 1; i >= 0; i--) {
			for (j = col - 1; j >= 1; j--)
				if ( matrix[i][0] == 0 || matrix[0][j] == 0)
					matrix[i][j] = 0;
			if (c == 0)
				matrix[i][0] = 0;
		}


	}
};

Input:
[
    [0, 1, 2, 0],
    [3, 4, 5, 2],
    [1, 3, 1, 5]
]
Output:
[
    [0, 0, 0, 0],
    [0, 4, 5, 0],
    [0, 3, 1, 0]
]