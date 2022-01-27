class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int subtreeSum(Node* root) {
        if(root == NULL)
            return 0;
        int curSum = root->data + 
                    subtreeSum(root->left) + subtreeSum(root->right);
        root->data = curSum - root->data;
        return curSum;
    }
    
    void toSumTree(Node *root)
    {
        subtreeSum(root);
        // Your code here
    }
};