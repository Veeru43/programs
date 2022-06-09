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
void insert_after(node *head,int value,int after)
{
    node *newnode=NULL,*temp=head;
    
    while(temp)
    {
        if(temp->n==after)
    {
        newnode=(node*)malloc(sizeof(node));
        if(newnode==NULL)
        {
            printf("Failed to Insert element");
        }
        newnode->n=value;
        newnode->next=temp->next;
        temp->next=newnode;
    }
    temp=temp->next;
    }
}
int main()
{
   int i,j,n,x,aft;
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
   printf("Enter a Element to insert\n");
   scanf("%i",&x);
   printf("Enter The number after which :\n");
   scanf("%i",&aft);
   insert_after(head,x,aft);
   display(head);
  
   
}



