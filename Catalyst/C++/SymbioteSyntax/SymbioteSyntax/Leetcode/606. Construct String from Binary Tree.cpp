//
//  606. Construct String from Binary Tree.cpp
//  SymbioteSyntax
//
//  Created by Atikul Gazi on 8/12/23.
//

#include <iostream>
using namespace std;

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
    string str = "";
    void dfs(TreeNode *root) {
        if (root == NULL) {
            return;
        }
        str += to_string(root->val);
        if (root->left || root->right) {
            str += "(";
            dfs(root->left);
            str += ")";
        }
        
        if (root->right) {
            str += "(";
            dfs(root->right);
            str += ")";
        }
    }
    
public:
    string tree2str(TreeNode* root) {
        dfs(root);
        return str;
    }
};

int main() {
    cout << "Hello, main.cpp!\n";
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    
    Solution sl;
    cout << sl.tree2str(root) << endl;
    
    return 0;
}
