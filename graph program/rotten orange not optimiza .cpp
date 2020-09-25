int rotOranges(vector<vector<int> >A[], int n, int m) {
        int count = 0;
        bool rotting = true, fresh = true;
        
        while (rotting) {
            rotting = fresh = false;
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (!fresh && A[i][j] == 1) 
						fresh = true;
                    else if (A[i][j] == count + 2) {
                        if (i > 0 && A[i - 1][j] == 1)
                            rotting = A[i - 1][j] = count + 3;
                        if (i < n - 1 && A[i + 1][j] == 1)
                            rotting = A[i + 1][j] = count + 3;
                        if (j > 0 && A[i][j - 1] == 1)
                            rotting = A[i][j - 1] = count + 3;
                        if (j < m - 1 && A[i][j + 1] == 1)
                            rotting = A[i][j + 1] = count + 3;
                    }
                }
            }
            
            if (rotting)
				count++;
        }
        return fresh ? -1 : count;
    }