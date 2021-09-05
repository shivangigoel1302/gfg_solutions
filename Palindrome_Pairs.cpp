class trieNode{
    public:
    vector<trieNode*>children;
    bool eow;
    trieNode(){
        children.resize(26,NULL);
        eow = false;
    }
};
class Solution{
public:

// Function to check if a palindrome pair exists
trieNode* getnode(trieNode* temp, char c){
     return temp->children[c-'a'];
}

void insertintrie(string word,trieNode* root){
    trieNode* temp = root;
    for(int i = 0 ; i < word.size(); i++){
        auto n = getnode(temp,word[i]);
        if(n == NULL){
            n = new trieNode();
        }
        temp->children[word[i]-'a'] = n;
        temp = n;
    }
    temp->eow = true;
}
void findstring(vector<string>&tests, trieNode* n,string s){
    if(n->eow){
        tests.push_back(s);
        return;
    }
    for(int i = 0; i < 26; i++){
        if(n->children[i] != NULL){
            char c = i+'a';

            findstring(tests,n->children[i],s + c);
        }
    }
    return;
}
bool ispalindrome(string s){
    int i = 0;
    int j = s.size()-1;
    while(i <= j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool search(string temp,trieNode* root){
    trieNode* n = root;
    for(int i = 0 ; i < temp.size(); i++){
        trieNode* next = getnode(n,temp[i]);
        if(next){
            n = next;
        }
        else{
            break;
        }
    }
    if(n->eow){
        return true;
    }
    vector<string>tests;
    findstring(tests,n,"");
    for(int i = 0; i < tests.size(); i++){
        if(ispalindrome(tests[i])){
            return true;
        }
    }
    return false;
}

bool palindromepair(int N, string arr[])
{
    // code here
    trieNode* root = new trieNode();
    for(int i = 0 ; i < N; i++){
        insertintrie(arr[i],root);
    }
    for(int i = 0; i < N; i++){
        reverse(arr[i].begin(),arr[i].end());
        if(search(arr[i],root)){
            return true;
        }
    }
    return false;
}
