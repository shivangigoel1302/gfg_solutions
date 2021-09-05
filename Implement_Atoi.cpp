int atoi(string str)
    {
        //Your code here
        int ans = 0;
        bool neg = false;
        int i = 0;
        if(str[0] == '-'){
            neg = true;
            i++;
        }
        for(; i< str.size(); i++){
            if(!isdigit(str[i])){
                return -1;
            }
            int a = str[i]-'0';
            ans = ans*10 + a;
        }
        if(neg){
            return -ans;
        }
        return ans;
    }
