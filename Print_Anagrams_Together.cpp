vector<vector<string> > Anagrams(vector<string>& string_list)
{
    // Your Code Here
    unordered_map<string,vector<string>>m;
    for(int i = 0 ; i < string_list.size(); i++){
        string temp = string_list[i];
        sort(temp.begin(),temp.end());
        m[temp].push_back(string_list[i]);
    }
    vector<vector<string>>ans;
    for(auto it: m){
        ans.push_back(it.second);
    }
    return ans;
}
