 void helper(string &str, string &max,int k,int ctr){
        if(k == 0){
            return;
        }
        int n = str.size();
        char c = str[ctr];
        for(int i = ctr+1; i < str.size(); i++){
            if(str[i] > c){
                c = str[i];
            }
        }
        if(c != str[ctr]){
            k--;
        }
        for(int j = ctr; j < n; j++){
            if(str[j] == c){
                swap(str[ctr],str[j]);
                if(str.compare(max) > 0){
                    max = str;
                }
                helper(str,max,k,ctr+1);
                swap(str[ctr],str[j]);
            }
        }

    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string max = str;
       helper(str,max,k,0);
       return max;
    }
