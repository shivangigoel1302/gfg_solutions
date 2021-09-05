int findMinInsertions(string S){
        // code here
        int n = S.size();
        vector<vector<int>>table(n,vector<int>(n,0));
        for(int gap = 1; gap < n; gap++){
            for(int i = 0,h = gap; i < n && h < n; i++,h++){
                table[i][h] = (S[i] == S[h] ? table[i+1][h-1] :
                min(table[i+1][h],table[i][h-1])+1);
            }
        }
        return table[0][n-1];
    }
