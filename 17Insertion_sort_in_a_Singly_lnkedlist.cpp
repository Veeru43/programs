#include<stdio.h> 
#include<stdlib.h> 
struct Node 
{ 
	int data; 
	struct Node* next; 
}; 
void sortedInsert(struct Node**, struct Node*); 

void insertionSort(struct Node **head_ref) 
{ 
	struct Node *sorted = NULL; 
	struct Node *current = *head_ref; 
	while (current != NULL) 
	{ 
		struct Node *next = current->next; 
		sortedInsert(&sorted, current); 
		current = next; 
	} 

	*head_ref = sorted; 
} 


void sortedInsert(struct Node** head_ref, struct Node* new_node) 
{ 
	struct Node* current; 
	if (*head_ref == NULL || (*head_ref)->data >= new_node->data) 
	{ 
		new_node->next = *head_ref; 
		*head_ref = new_node; 
	} 
	else
	{ 
		current = *head_ref; 
		while (current->next!=NULL && 
			current->next->data < new_node->data) 
		{ 
			current = current->next; 
		} 
		new_node->next = current->next; 
		current->next = new_node; 
	} 
} 

void printList(struct Node *head) 
{ 
	struct Node *temp = head; 
	while(temp != NULL) 
	{ 
		printf("%d ", temp->data); 
		temp = temp->next; 
	} 
} 

void push(struct Node** head_ref, int new_data) 
{ 
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 
int main() 
{ 
    printf("18B95A0231\n");
	struct Node *a = NULL; 
	push(&a, 5); 
	push(&a, 20); 
	push(&a, 4); 
	push(&a, 3); 
	push(&a, 30); 

	printf("Linked List before sorting \n"); 
	printList(a); 

	insertionSort(&a); 

	printf("\nLinked List after sorting \n"); 
	printList(a); 

	return 0; 
}


