/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    
    bool allSame(vector<vector<int>> &grid, int r1, int r2, int c1, int c2) {
        int prev = grid[r1][c1];
        for(int i = r1; i <= r2; i++) {
            for(int j = c1; j <= c2; j++) {
                if(grid[i][j] != prev)
                    return false;
            }
        }
        return true;
    }
    
    Node* helper(vector<vector<int>> &grid, int r1, int r2, int c1, int c2) {
        if(allSame(grid, r1, r2, c1, c2))
            return new Node(grid[r1][c1], true);
        int rmid = (r1+r2) / 2, cmid = (c1+c2) / 2;
        return new Node(0, false, 
                        helper(grid, r1, rmid, c1, cmid),
                        helper(grid, r1, rmid, cmid+1, c2),
                        helper(grid, rmid+1, r2, c1, cmid),
                        helper(grid, rmid+1, r2, cmid+1, c2));
    }
    
    Node* construct(vector<vector<int>>& grid) {
        int n = grid.size();
        return helper(grid, 0, n-1, 0, n-1);
    }
};