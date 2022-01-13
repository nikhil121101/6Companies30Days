pair<int, int> dfs(Node* root, int X) { // return {sum, result}
    if(!root)
        return {0, 0};
    auto left = dfs(root->left, X);
    auto right = dfs(root->right, X);
    int sum = left.first+right.first+root->data;
    return {
        sum,
        (sum == X) + left.second + right.second
    };
}

int countSubtreesWithSumX(Node* root, int X)
{
	return dfs(root, X).second;
}