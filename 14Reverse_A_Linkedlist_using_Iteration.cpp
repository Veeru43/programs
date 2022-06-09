#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int n;
    struct node *next;
}node;
node *insert(node *head,int x)
{
    node *temp,*newnode;
    temp=head;
    newnode=(node*)malloc(sizeof(node));
    newnode->n=x;
    newnode->next=NULL;
    if(temp==NULL)
    {
       return newnode;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
    }
}

void display(node *head)
{
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%i ",temp->n);
        temp=temp->next;
    }
    printf("\n");
}
node *reverse(node *head)
{
    node *prev=NULL,*current=head,*next;
    while(current!=NULL)
    {
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
    }
    head=prev;
}

int main()
{
   int i,j,n;
   printf("18B95A0231\n");
   node *head;
   head=NULL;
   printf("Enter Number Of Elements");
   scanf("%i",&n);
   printf("Enter Elements");
   for(i=0;i<n;i++)
   {
      scanf("%i",&j);
      head=insert(head,j);
   }
   display(head);
   head=reverse(head);
   display(head);
}

