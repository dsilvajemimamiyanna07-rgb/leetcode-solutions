#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    
    while (curr != NULL) {
        struct ListNode* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    
    return prev;
}

// Helper function to create a node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print list
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    printf("[");
    while (temp != NULL) {
        printf("%d", temp->val);
        if (temp->next != NULL) printf(", ");
        temp = temp->next;
    }
    printf("]\n");
}

// Helper function to free list memory
void freeList(struct ListNode* head) {
    struct ListNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original List: ");
    printList(head);

    struct ListNode* reversedHead = reverseList(head);

    printf("Reversed List: ");
    printList(reversedHead);

    freeList(reversedHead);
    return 0;
}