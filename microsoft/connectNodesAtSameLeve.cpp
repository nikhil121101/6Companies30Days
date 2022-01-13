class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        root->nextRight = NULL;
        
        Node* prevHead = root;
        
        while(prevHead) {
            Node* curHead = NULL;
            
            Node* cur = prevHead;
            Node* prev = NULL;
            
            while(cur) {
                if(cur->left) {
                    if(prev) {
                        prev->nextRight = cur->left;
                    }
                    else {
                        curHead = cur->left;
                    }
                    prev = cur->left;
                }
                if(cur->right) {
                    if(prev) {
                        prev->nextRight = cur->right;
                    }
                    else {
                        curHead = cur->right;
                    }
                    prev = cur->right;
                }
                cur =  cur->nextRight;
            }
            
            prevHead = curHead;
        }
        
    }    
      
};