#include<stdio.h>
#include<stdlib.h>
typedef struct node  {
int data;
struct node* next;
struct node* prev;
}node;
node* head;
node* getnewnode(int x)
{
node* newnode= (node*)malloc(sizeof(node));
newnode->data = x;
newnode->prev = NULL;
newnode->next = NULL;
return newnode;
}
void insertathead(int x) {
node* newnode = getnewnode(x);
if(head == NULL) {
head = newnode;
return;
}
head->prev = newnode;
newnode->next = head;
head = newnode;
}
void deleteathead()  
{  
    node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;  
        free(head);  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
    }  
}  


void display() {
node* temp = head;
while(temp != NULL) {
printf("%d ",temp->data);
temp = temp->next;
}
}

int main()
{
	printf("18B95A0231\n");
head = NULL;
insertathead(6);
insertathead(8);
insertathead(10);

deleteathead();
display();

}

