#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int n;
	struct node *next;
}node;

int detectloop(node *head)
{
    node *slow_p=head,*fast_p=head;
    while(slow_p&&fast_p&&fast_p->next)
    {
        slow_p=slow_p->next;
        fast_p=fast_p->next->next;
        if(slow_p==fast_p)
        return 1 ;
        
    }
    return 0;
}

node* newNode(int x)
{
    
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	temp->n=x;
	return temp;
}
void display(node *head)
{
	node *temp;
	temp=head;
	while(temp->next!=NULL && !detectloop(head))
	{
		printf("%i ",temp->n);
		temp=temp->next;
		
	}
}
int main()
{
	printf("18B95A0231\n");
	node *head;
	head=newNode(30);
	head->next=newNode(40);
	head->next->next=newNode(50);
	head->next->next->next=newNode(60);
	head->next->next->next->next=head->next;
	display(head);
	if(detectloop(head))
	printf("yes");
	else
	printf("No");
}


