
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next;
   
}node;
node * insertatb(node *head,int x)
{
    node *temp,*newnode;
    temp=head;
    newnode=(node*)malloc(sizeof(node));
    newnode->n=x;
    newnode->next=head;
    head=newnode;
    return head;
}
node * deleteatb(node *head)
{
    node *temp;
    temp=head;
    head=head->next;
    free(temp);
    return head;
}
void display(node *head)
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->n);
        temp=temp->next;
         
    }
      printf("\n");
}


int main()
{
	printf("18B95A0231\n");
    node *head;
    head=insertatb(NULL,5);
    head=insertatb(head,6);
    head=insertatb(head,7);
    display(head);
    head=deleteatb(head);
    display(head);
}

