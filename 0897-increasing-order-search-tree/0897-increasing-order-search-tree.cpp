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
    vector <TreeNode*> list; 
    TreeNode* increasingBST(TreeNode* root ) {
        
        if(root ==NULL){
            return NULL;
        }
        inorder(root); 
       list.push_back(NULL);
        for(int i =0;i< list.size()-1;i++){
            list[i] -> right = list[i+1];
            list[i] -> left = NULL;
        }
        return list[0];
        
    }
    
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root-> left);
        list.push_back(root);
        inorder(root-> right);
    }
};