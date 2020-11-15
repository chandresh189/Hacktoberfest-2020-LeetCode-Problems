/**
Solution to Range Sum of BST at LeetCode in C++
author: chandresh189
ref: https://leetcode.com/explore/challenge/card/november-leetcoding-challenge/566/week-3-november-15th-november-21st/3532/
**/
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        sol(root, low, high, sum);
        return sum;
    }
    void sol(TreeNode* root, int low, int high, int &s) {
        if(!root) return ;
        if(root->val<=high && root->val>=low)
            s+=root->val;
        sol(root->left, low, high, s);
        sol(root->right, low, high, s);
    }
};
