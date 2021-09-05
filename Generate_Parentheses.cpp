public:
    void generate(vector<string>&ans,int o,int c, int n,string s){
        if(o == n && c == n){

            ans.push_back(s);
            return;
        }
        if(o < n){
            generate(ans,o+1,c,n,s+"(");
        }
        if(c < o){
            generate(ans,o,c+1,n,s+")");
        }
        return;
    }
    vector<string> AllParenthesis(int n)
    {
        // Your code goes here
        vector<string>ans;
        string s="";
        generate(ans,0,0,n,s);
        return ans;
    }
