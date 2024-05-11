/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
}lista;

struct ListNode* removeNodes(struct ListNode* head) {

    for(lista* percorre = head; percorre->next != NULL; percorre->next = percorre->next->next){
        while()
    }
    

}
