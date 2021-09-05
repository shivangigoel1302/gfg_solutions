string helper(unordered_map<string,int>&m, Node* root,int &found){
        if(root== NULL){
            return "";
        }
        string temp = "";
        int cnt = 1;
        if(root->left){
            cnt++;
            temp += helper(m,root->left,found) + "$";
        }

        temp += to_string(root->data) + "#";
        if(root->right){
           temp += helper(m,root->right,found);
           cnt++;
        }
        if(cnt >= 3 && m.find(temp) != m.end()){
            found = true;
        }
        m[temp]++;
        return temp;
    }
    int dupSub(Node *root) {
         // code here
         unordered_map<string,int>m;
         int found = 0;
         helper(m,root,found);
         return found;
    }
