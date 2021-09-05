Node* gettree(string s, int &i){
    if(i >= s.size()){
        return NULL;
    }
    Node* n;
     if(s[i] != '?' && s[i] != ':'){
         n = new Node(s[i]);
         i++;

     }
     if(s[i] == '?'){
         i++;
         n->left = gettree(s,i);
     }
     else if(s[i] == ':'){
         i++;
         return n;
     }
     if(s[i] != '?' && s[i] != ':'){
         //
         n->right = gettree(s,i);
     }
     return n;
}
Node *convertExpression(string str,int i)
{
//add code here.
   Node* head = gettree(str,i);
   return head;
}
