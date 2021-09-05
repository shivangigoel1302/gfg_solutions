 public:
    string reverseWords (string s)
    {
        //code here.
        string ans ="";
        string t ="";
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == '.'){
                ans += t;
                ans += '.';
                t = "";
            }
            else{
                t = s[i] + t;
            }
        }
        ans += t;
        return ans;
    }
    }
