public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        // code here
        queue<vector<string>>q;
        vector<vector<string>>ans;
        q.push({beginWord});
        int level = 1;
        unordered_set<string>visited;
        int minlevel = INT_MAX;
        unordered_set<string>dict(wordList.begin(),wordList.end());
        while(!q.empty()){
            vector<string>curr = q.front();
            q.pop();
            if(curr.size() > level){
                auto it = visited.begin();
                while(it != visited.end()){
                    string s = *it;
                    dict.erase(s);
                    it++;
                }
                visited.clear();
                level = curr.size();
                if(curr.size() > minlevel){
                    break;
                }
            }
            string temp = curr.back();
            for(int i = 0 ; i < temp.size(); i++){
                char c = temp[i];
                for(int j = 0 ; j < 26; j++){
                    vector<string>newpath = curr;
                    temp[i] = j + 'a';
                    if(dict.find(temp) != dict.end()){
                        visited.insert(temp);
                        newpath.push_back(temp);
                        q.push(newpath);
                        if(temp == endWord){
                            minlevel = level;
                            ans.push_back(newpath);
                        }
                    }
                    temp[i] = c;
                }
            }

        }
        return ans;
    }
