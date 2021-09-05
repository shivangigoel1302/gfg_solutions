vector<int> postOrder(Node* node) {
    // code here
    vector<int>ans;
        stack<Node*>s;
        unordered_set<Node*>st;
        Node*itr=node;
        while(!s.empty()||itr!=NULL)
        {
            if(itr!=NULL)
            {
                s.push(itr);
                st.insert(itr);
                itr=itr->left;
            }
            else
            {
                Node*temp=s.top();
                s.pop();
                if(st.find(temp)!=st.end())
                {
                    st.erase(st.find(temp));
                    s.push(temp);
                    itr=temp->right;
                }
                else
                {
                    ans.push_back(temp->data);
                    itr=NULL;
                }
            }
        }
        return ans;
}
