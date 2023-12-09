//
//  94. Binary Tree Inorder Traversal.cpp
//  SymbioteSyntax
//
//  Created by Atikul Gazi on 9/12/23.
//

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int v) {
        val = v;
        left = right = NULL;
    }
};

class Solution {
    vector<int> result;
    
    void dfs(TreeNode *root) {
        if (root == NULL) {
            return;
        }
        dfs(root->left);
        result.push_back(root->val);
        dfs(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        dfs(root);
        return result;
    }
};

int main() {
    cout << "Hello, 94. Binary Tree Inorder Traversal.cpp!\n";
    TreeNode *root = new TreeNode(1);
    //root->left = new TreeNode(0);
    root->right = new TreeNode(2);
    //root->left->left = new TreeNode(0);
    root->right->left = new TreeNode(3);
    
    Solution sl;
    for (auto x : sl.inorderTraversal(root)) {
        cout << x << endl;
    }
    
    return 0;
}
