  public:
    int isCircle(int N, vector<string> A)
    {
        // code here
        vector<int>first(26,0);
        vector<int>last(26,0);
        for(int i = 0 ; i < N ;i++){
            first[A[i][0]-'a']++;
            if(A[i][0] != A[i][A[i].size()-1]){
                last[A[i][A[i].size()-1]-'a']++;
            }
        }
        for(int i= 0; i < 26; i++){
            if(first[i] != last[i]){
                return 0;
            }
        }
        return 1;
    }
