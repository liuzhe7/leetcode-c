// https://leetcode.cn/problems/maximum-depth-of-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode {
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};

// f(x) = max(f(x.r),f(x.l)) + 1
// return 1 x.r or x.l == nil
int maxDepth(struct TreeNode* root){
  if (root == 0){
    return 0;
  }

  int maxLeft = maxDepth(root->left);
  int maxRight = maxDepth(root->right);


  return maxLeft > maxRight?maxLeft +1 :maxRight + 1; 
}