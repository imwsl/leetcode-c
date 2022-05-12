#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

int length_of_list(struct ListNode* l) {
    int length = 0;
    if (l == NULL) return 0;
    
    struct ListNode *p = l;
    while (p != NULL) {
        length ++;
        p = p->next;
    }

    return length;
}

struct ListNode* create_list(int* arr, int size) {
    struct ListNode* head = NULL;
    struct ListNode* p = NULL;

    for (int i = 0; i < size; i ++) {
        if (i == 0) {
            head = (struct ListNode *)malloc(sizeof(struct ListNode));
            head->val = arr[i];
            head->next = NULL;
            p = head;
        } else {
            struct ListNode* temp = (struct ListNode *)malloc(sizeof(struct ListNode));
            temp->val = arr[i];
            temp->next = NULL;
            p->next = temp;
            p = temp;
        }
    }

    return head;
}

struct ListNode* addTwoNumber(struct ListNode* l1, struct ListNode* l2) {

}

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    struct ListNode * l1 = create_list(arr, 5);
    int len = length_of_list(l1);
    printf("%d\n", len);

    return 0;
}