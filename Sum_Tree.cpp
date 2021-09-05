bool isSum(Node*& root){
    if(root == NULL){
         return true;
     }
     if(!root->left && !root->right){
         return true;
     }
     if(!isSumTree(root->left) || !isSumTree(root->right)){
         return false;
     }

     int l=0,r = 0;
     if(root->left){
         l = root->left->data;
     }
     if(root->right){
         r = root->right->data;
     }
     if(root->data != l+r){
         return false;
     }
     root->data += l + r;
     return true;
}
bool isSumTree(Node* root)
{
    return isSum(root);

}
