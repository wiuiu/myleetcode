#pragma once
#include <vector>
struct ListNode {
    int val;
    struct ListNode *next;

    ListNode(int x) : val(x), next(NULL) {
    }
};
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
void printVec(const std::vector<int> &vec);
TreeNode *initTree(TreeNode *root);
ListNode *initList(ListNode *head);