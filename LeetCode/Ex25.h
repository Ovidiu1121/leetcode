
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>


/*Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

Example 1:

Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:

Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5] */

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
};

ListNode* reverseKGroup(ListNode* head, int k) {

    if (head == NULL) {
        return head;
    }

    int ct = 0;
    ListNode* actual = head;
    ListNode* ant = NULL;
    ListNode* urm = NULL;

    ListNode* aux = head;

    for (int i = 0; i < k; ++i) {
        if (aux == NULL) {
            return head;
        }
        aux = aux->next;
    }
    while (actual != NULL && ct < k) {
        urm = actual->next;
        actual->next = ant;
        ant = actual;
        actual = urm;
        ct++;
    }
    if (urm != NULL) {
        head->next = reverseKGroup(urm, k);
    }

    return ant;

}

void solutie() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 3;
    head = reverseKGroup(head, k);

    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }


}

