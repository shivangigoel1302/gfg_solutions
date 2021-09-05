public:
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here
        vector<int>rowsum(n,0);
        vector<int>colsum(n,0);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                rowsum[i] += matrix[i][j];
                colsum[j] += matrix[i][j];
            }
        }
        int target = 0;
        for(int i = 0 ; i < n ; i++){
            target = max(target,rowsum[i]);
            target = max(target,colsum[i]);
        }
        int count = 0;
        for(int i = 0,j = 0; i < n && j < n;){
            int diff = min(target-rowsum[i], target-colsum[j]);
            count += diff;
            matrix[i][j] += diff;
            rowsum[i] += diff;
            if(rowsum[i] == target){
                i++;
            }
            colsum[j] += diff;
            if(colsum[j] == target){
                j++;
            }

        }
        return count;
    }
