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
    int solve(TreeNode* root, int &low, int &high){
        int ans = 0;
        if(root==NULL)
                return 0;
        bool isInrange = false;
        if(root-> val <= high && root-> val >=low){
            isInrange = true;
            ans+= root-> val;
            
        }
        if(isInrange || root-> val <= high){
             ans+= solve(root-> right, low , high);
        }
         if(isInrange || root-> val >=low){
             ans+= solve(root-> left, low , high);
        }
        
        return ans;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        return solve(root, low, high);
        
    
    }
};