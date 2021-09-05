public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        int level = 1;
        queue<string>q;
        q.push(startWord);
        unordered_set<string>dict(wordList.begin(),wordList.end());
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                string temp = q.front();
                q.pop();
                for(int i = 0; i < temp.size(); i++){
                    char c = temp[i];
                    for(int j = 0; j < 26; j++){
                        temp[i] = j + 'a';
                        if(dict.find(temp) != dict.end()){
                            if(temp == targetWord){
                                return level+1;
                            }
                            dict.erase(temp);
                            q.push(temp);
                        }
                        temp[i] = c;
                    }
                }
            }
            level++;
        }
        return 0;
    }
