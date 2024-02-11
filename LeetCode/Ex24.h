

#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* f(ListNode* head) {

    if (head == NULL) { 
        return NULL;
    }

    if (head->next == NULL) {
        return head;
    }

    if (head->next->next == NULL) {
        ListNode* temp = head->next;
        head->next->next = head;
        head->next = NULL;
        return temp;
    }

    ListNode* n = head->next;
    head->next = f(head->next->next);
    n->next = head;

    return n;

}

ListNode* swapPairs(ListNode* head) {

    if (head == NULL || head->next == NULL) {
        return head;
    }

    return f(head);
}

void solutie() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode* node = swapPairs(head);

    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }


}