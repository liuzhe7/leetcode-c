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

//f(x) ->  f.right = f(x.left); f.left(x.right)
struct TreeNode* mirrorTree(struct TreeNode* root){
    if (root == 0) {
      return root;
    };
    struct TreeNode* tmp = root->left;
    root->left = mirrorTree(root->right);
    root->right = mirrorTree(tmp);
    return root;
}