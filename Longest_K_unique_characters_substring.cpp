int longestKSubstr(string s, int k) {
    // your code here
    int count = 0;
    int start = 0;
    int ans = -1;
    vector<int>freq(26,0);
       for(int i = 0; i < s.size(); i++){
           freq[s[i] - 'a']++;
           if(freq[s[i] - 'a'] == 1){
               count++;
           }
           if(count == k+1){
              while(freq[s[start]-'a'] >= 1){

                  freq[s[start]-'a']--;
                  if(freq[s[start] - 'a'] == 0){
                      count--;
                      start++;
                      break;
                  }
                  start++;
              }

              int len = i - start+1;
              ans = max(ans,len);
           }
           if(count == k){
               ans = max(ans,i-start+1);
           }
       }
       return ans;
    }
