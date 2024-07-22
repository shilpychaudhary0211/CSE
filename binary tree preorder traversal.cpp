class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> result;
        if (root == NULL) return result;
        stack<TreeNode*> stack;
        stack.push(root);
        while (!stack.empty()){
            TreeNode* node = stack.top();
            stack.pop();
            result.push_back(node->val);
                  if (node->right != NULL) {
                stack.push(node->right);
            }

            if (node->left != NULL) {
                stack.push(node->left);
            }
            
        }

        return result;

        
    }
};
