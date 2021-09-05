void connect(Node *p)
{
   // Your Code Here
   queue<Node*>q;
   q.push(p);
   q.push(NULL);
   while(!q.empty()){
       int qsize = q.size();
       while(qsize--){
           auto l = q.front();
           q.pop();
           if(l == NULL){
               if(!q.empty()){
                   q.push(NULL);
               }
           }
           else{
               l->nextRight = q.front();
               if(l->left){
                   q.push(l->left);
               }
               if(l->right){
                   q.push(l->right);
               }
           }
       }
   }
   return;
}
