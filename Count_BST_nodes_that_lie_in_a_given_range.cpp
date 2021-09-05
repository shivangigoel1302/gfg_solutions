int getCount(Node *root, int l, int h)
{
  // your code goes here
  int count = 0;
  if(root == NULL){
      return 0;
  }
  if(root->data < l){
      count += getCount(root->right, l,h);
      return count;
  }
  if(root -> data > h){
      count+= getCount(root->left,l,h);
      return count;
  }
  else{
      count += 1;
      count += getCount(root->left,l,h);
      count += getCount(root->right,l,h);
  }
  return count;
}
