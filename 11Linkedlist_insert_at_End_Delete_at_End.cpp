#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next;
}node;
node * insertate(node *head,int x)
{
    node*temp,*newnode;
    temp=head;
    newnode=(node*)malloc(sizeof(node));
    newnode->n=x;
    newnode->next=NULL;
    if(temp==NULL)
    {
        return newnode;
    }
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    return head;
}
node * deleteate(node* head )
{
    node *temp,*temp1;
    temp=head;
    if(temp==NULL)
    return head;
    else if(temp->next==NULL)
    {
        free(temp);
        head=NULL;
        return head;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp1=temp->next;
        temp->next=NULL;
        free(temp1);
        return head;
    }
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
    head=insertate(NULL,5);
    head=insertate(head,6);
    head=insertate(head,7);
    display(head);
    head=deleteate(head);
    display(head);
   
   
}

