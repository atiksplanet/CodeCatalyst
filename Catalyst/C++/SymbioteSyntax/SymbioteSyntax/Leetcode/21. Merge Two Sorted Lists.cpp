//
//  merge-two-sorted-lists.cpp
//  MAANG
//
//  Created by Atikul Gazi on 30/3/23.
//

#include <stdio.h>
#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr) {}
    };
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2;
        else if (list2 == nullptr) return list1;
        else if(list1 == nullptr && list2 == nullptr) return nullptr;
        else {
            ListNode *merge = nullptr, *adder = nullptr;
            while (list1 != nullptr || list2 != nullptr) {
                if (list1 == nullptr) {
                    if (merge == nullptr) {
                        merge = new ListNode(list2->val);
                        adder = merge;
                    } else {
                        adder->next = new ListNode(list2->val);
                        adder = adder->next;
                    }
                    list2 = list2->next;
                }
                else if (list2 == nullptr) {
                    if (merge == nullptr) {
                        merge = new ListNode(list1->val);
                        adder = merge;
                    } else {
                        adder->next = new ListNode(list1->val);
                        adder = adder->next;
                    }
                    list1 = list1->next;
                }
                else if (list1->val < list2->val) {
                    // pick from list1
                    if (merge == nullptr) {
                        merge = new ListNode(list1->val);
                        adder = merge;
                    } else {
                        adder->next = new ListNode(list1->val);
                        adder = adder->next;
                    }
                    list1 = list1->next;
                } else {
                    // Pick from list2
                    if (merge == nullptr) {
                        merge = new ListNode(list2->val);
                        adder = merge;
                    } else {
                        adder->next = new ListNode(list2->val);
                        adder = adder->next;
                    }
                    list2 = list2->next;
                }
            }
            
            return merge;
        }
    }
    
    Solution() {
        ListNode *list1, *list2 = nullptr;
        list1 = new ListNode(1);
        list1->next = new ListNode(2);
        list1->next->next = new ListNode(4);
        list2 = new ListNode(1);
        list2->next = new ListNode(3);
        list2->next->next = new ListNode(4);
        auto merge = mergeTwoLists(list1, list2);
        while (merge != nullptr) {
            cout << merge->val << " ";
            merge = merge->next;
        }
        cout << endl;
    }
};

int main() {
    cout << "In SetOperations" << endl;
    Solution sl;
    return 0;
}
