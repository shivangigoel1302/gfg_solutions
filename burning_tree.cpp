int searchtarget(Node* root, int target, queue<Node*>&q,int&ans){
    if(root == NULL){
        return 0;
    }
    if(root->data == target){
        if(root->left){
            q.push(root->left);
        }
        if(root->right){
            q.push(root->right);
        }
        return 1;
    }
    int a = searchtarget(root->left,target,q,ans);
    if(a== 1){
        int qsize = q.size();
        while(qsize--){
            auto p = q.front();
            //cout p->data;
            q.pop();
            if(p->left){
                q.push(p->left);
            }
            if(p->right){
                q.push(p->right);
            }
        }
        ans++;
        if(root->right){
            q.push(root->right);
        }
        return 1;
    }
    int b = searchtarget(root->right,target,q,ans);
    if(b == 1){
        int qsize = q.size();
        while(qsize--){
            auto p = q.front();
            //cout p->data
            q.pop();
            if(p->left){
                q.push(p->left);
            }
            if(p->right){
                q.push(p->right);
            }
        }
        ans++;
        if(root->left){
            q.push(root->left);
        }
        return 1;
    }
}
int treeburn(Node* root, int target, queue<Node*>q){
    int ans = 0;
    searchtarget(root,target,q,ans);
    while(!q.empty()){
        int qsize = q.size();
        while(qsize--){
            auto p = q.front();
            q.pop();
            if(p->left){
                q.push(p->left);
            }
            if(p->right){
                q.push(p->right);
            }
        }
        ans++;
    }
    return ans;
}
