#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;
 

void push(Node** head_ref, int new_data)
{
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 

void printList(Node* node)
{
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
int countNodes(Node* s)
{
    int count = 0;
    while (s != NULL) {
        count++;
        s = s->next;
    }
    return count;
}
 

void changeFirstAndLast (Node** head_ref, int k)
{
   
    int n = countNodes(*head_ref);
   
    if (n < k)
        return;
   
    if (2 * k - 1 == n)
        return;
   
    Node* x = *head_ref;
    Node* x_prev = NULL;
    int i;
	for ( i = 1; i < k; i++) {
        x_prev = x;
        x = x->next;
    }
  
    Node* y = *head_ref;
    Node* y_prev = NULL;
    
	for (i = 1; i < n - k + 1; i++) {
        y_prev = y;
        y = y->next;
    }
    
    if (x_prev)
        x_prev->next = y;
   
    if (y_prev)
        y_prev->next = x;
   
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;
  
    if (k == 1)
        *head_ref = y;
    if (k == n)
        *head_ref = x;
}
 

int main()
{

    Node* head = NULL;
    int i;
	for (i = 8; i >= 1; i--)
        push(&head, i);
    printf("Original Linked List: ");
    printList(head);
    int k;
	 k=8;
        changeFirstAndLast (&head, k);
        printf("\nModified List for k = %d\n", k);
        printList(head);
    
    return 0;
}
