

#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

/*Given the head of a linked list, remove the nth node from the end of the list and return its head.
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]*/


struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast = head, * slow = head;
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    if (!fast) {
        return head->next;
    }
    while (fast->next) {
        fast = fast->next, slow = slow->next;
    }
    slow->next = slow->next->next;
    
    return head;
}

void solutie() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    head = removeNthFromEnd(head, 2);

    while (head) {
        cout << head->val << " ";
        head = head->next;
    }

}