#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode {
    int val;
    struct ListNode *next;
}nodo;

struct ListNode* reverseList(struct ListNode* head){
    nodo *copia;

        for(copia = head ; copia != NULL; copia = copia->next){
            
            copia = copia->next;
            copia->next = copia->next->next;
        }
    }
int main(){


}
