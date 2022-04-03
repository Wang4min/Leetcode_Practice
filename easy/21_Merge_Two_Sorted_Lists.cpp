/*
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.
*/

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

struct ListNode{
    int val;
    ListNode *next;
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(!list1) return list2;
    if(!list2) return list1;
    ListNode *res = NULL;
    if(list1->val <= list2->val){
        res = list1;
        list1 = list1->next;
    }
    else{
        res = list2;
        list2 = list2->next;
    }

    ListNode *tmp = res;
    while(list1 && list2){
        if(list1->val < list2->val){
            tmp->next = list1;
            list1 = list1->next;
        }
        else{
            tmp->next = list2;
            list2 = list2->next;
        }
        tmp = tmp->next;
    }
    if(list1) tmp->next = list1;
    else tmp->next = list2;
    
    return res;
}

int main(){


}