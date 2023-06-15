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
    int maxDepth(TreeNode* root) {
         if(root == NULL){
        return 0;
    }
    int leftHeight = maxDepth(root-> left);
    int rightHeight = maxDepth(root -> right);
    int ans = max(leftHeight, rightHeight) +1;
    return ans;

    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int leftHeight = maxDepth(root-> left);
         int rightHeight = maxDepth(root-> right);
         int diff  = abs(leftHeight - rightHeight);
        bool ans1= (diff<=1);
        
        bool leftAns = isBalanced(root-> left);
         bool rightAns = isBalanced(root-> right);
        
        if(ans1  && leftAns && rightAns){
            return true;
        }
        else{
            return false;
        }
    }
};