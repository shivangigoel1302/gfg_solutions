int getvalue(string s,int i,int m){
    if(i+m > s.size()){
        return -1;
    }
    int val = 0;
    for(int j = 0; j < m; j++){
        int a = s[i+j]-'0';
        val = val*10+a;
    }
    return val;
}
int missingNumber(const string& str)
{
    // Code here

    for(int m = 1; m <= 6;m++){
        int n = getvalue(str,0,m);
        int missing = -1;
        bool fail = false;
        if(n == -1){
            break;
        }
        for(int i = m; i < str.size(); i+= 1 + log10l(n)){
            if(missing == -1 && getvalue(str,i,1+log10l(n+2)) == n+2){
                missing = n+1;
                n += 2;
            }
            else if(getvalue(str,i,1+log10l(n+1)) == n+1){
                n++;
            }
            else{
                fail = true;
                break;
             }
          }
        if(!fail){
            return missing;
        }
    }
    return -1;
}
