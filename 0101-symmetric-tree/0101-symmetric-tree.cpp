/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool inOrder(TreeNode* r, TreeNode* l){
        if(!r && !l){
            return true;
        }
        if(!r || !l){
            return false;
        }
        if(r-> val != l-> val){
            return false;
        }
        return inOrder(l-> left, r-> right) && inOrder(l-> right, r-> left);
        
    }
    bool isSymmetric(TreeNode* root) {
      bool ans = inOrder(root->right, root-> left);
        return ans;
    }
};