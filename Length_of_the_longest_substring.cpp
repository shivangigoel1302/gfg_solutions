int longestUniqueSubsttr(string S){
        //code
        int ans =0;
        int start = 0;
        vector<int>m(26,0);
        for(int i = 0; i < S.size(); i++){
            m[S[i]-'a']++;
            if(m[S[i]-'a'] == 2){
                while(m[S[i]-'a'] == 2){
                    m[S[start]-'a']--;
                    start++;
                }
            }
            ans = max(ans,i-start+1);
        }
        return ans;
    }
