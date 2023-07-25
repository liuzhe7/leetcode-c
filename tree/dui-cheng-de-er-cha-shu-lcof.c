// https://leetcode.cn/problems/dui-cheng-de-er-cha-shu-lcof/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef int bool;

typedef struct TreeNode {
     int val;
      struct TreeNode *left;
     struct TreeNode *right;
};

bool isMirror(struct TreeNode* left,struct TreeNode* right) {
  if (left == 0 && right != 0) {
    return 0;
  }
    if (left != 0 && right== 0) {
    return 0;
  }

  if (left == 0 && right == 0) {
    return 1;
  }

  return isMirror(left->right,right->left) && isMirror(left->left,right->right) && right->val == left->val;

}
bool isSymmetric(struct TreeNode* root){
  if (root==0) {
    return 1;
  }

  return isMirror(root->left,root->right);
}

