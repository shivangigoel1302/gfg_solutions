bool metaStrings (string S1, string S2)
{
    // your code here

    unordered_map<char,vector<int>>m;
    for(int i = 0; i < S2.size(); i++){
        m[S2[i]].push_back(i);
    }
    int flag = 0;
    for(int i = 0; i < S2.size(); i++){
        if(S1[i] == S2[i]){
            continue;
        }
        if(flag == 1){
            return false;
        }
        if(m.find(S1[i]) == m.end()){
            return false;
        }
        for(int k = 0; k < m[S1[i]].size(); k++){
            int j = m[S1[i]][k];
            if(S1[j] == S2[i]){
                 swap(S1[i],S1[j]);
                flag = 1;
                break;
            }

        }
        if(flag == 0){
            return false;
        }
    }
    if(flag == 1){
        return true;
    }
    return false;

}
