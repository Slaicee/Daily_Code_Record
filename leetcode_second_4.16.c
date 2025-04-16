bool isMiorTree(struct TreeNode* p,struct TreeNode* q)
{
    if(p == NULL && q == NULL)
    return true;
    else if(p == NULL || q == NULL)
    return false;
    else if(p -> val != q -> val)
    return false;
    else
    return isMiorTree(p -> left,q -> right) && isMiorTree(p -> right,q -> left);
}

bool isSymmetric(struct TreeNode* root) 
{
    return isMiorTree(root -> left,root -> right);    
}