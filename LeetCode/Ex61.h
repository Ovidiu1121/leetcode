
#include <iostream>
using namespace std;
#include <fstream>
#include <math.h>
#include <cmath>

//Given the head of a linked list, rotate the list to the right by k places.


struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
	
};

ListNode* findNode(ListNode* head, int k) {

    int ct = 1;
    
    while (head != NULL) {
        if (ct == k) {
            return head;
        }
        ct++;
        head = head->next;
    }

    return head;
}

ListNode* rotateLL(ListNode* head, int k) {

    if (head == NULL || k == 0) {
        return head;
    } 
    
    ListNode* finish = head;
    int d = 1;

    while (finish->next != NULL) {
        finish = finish->next;
        d++;
    }

    if (k % d == 0) return head;
    k = k % d;

    finish->next = head;

    ListNode* newFinish = findNode(head, d - k);

    head = newFinish->next;
    newFinish->next = NULL;

    return head;
}

ListNode* rotateRight(ListNode* head, int k) {

    return rotateLL(head, k);

}

void solutie() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;
    ListNode* current = head;

    head = rotateRight(head, k);

    current = head;
    while (current != nullptr) {
         cout << current->val << " ";
        current = current->next;
    }


}




