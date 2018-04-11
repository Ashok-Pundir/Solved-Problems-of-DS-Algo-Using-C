#include<stdio.h>
#include<stdlib.h>

struct node
	{
		int info;
		node *next;
	};
void display(node *head)
{
	node *t=NULL;
	t=head;
	while(t!=NULL)
	{
		printf("%d ",t->info);
		t=t->next;
	}
	free(t);	
}
void cumulative(node * head)
{
	int sum=0;
	while(head!=NULL)
	{
		sum+=head->info;
		head->info=sum;
		head=head->next;
	}
}
node * insert(node *head,int num)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->info=num;
	p->next=NULL;
	
	if(head==NULL)
	{
		head=p;
	}	
	else
	{
		node *t=NULL;
		t=head;
		while(t->next!=NULL)
			t=t->next;
			
		t->next=p;
	
	}
	return head;
}	
int main()
{
	node *head=NULL;
	int num,p;
	do
	{
	printf("Enter the nodes:-");
	scanf("%d",&num);
	head=insert(head,num);
	printf("Do you want to enter more nodes:-(Press 1 else 0)-");
	scanf("%d",&num);	
	}while(num==1);
	printf("\n Array is :");
	display(head);
	printf("\nThe Cumulative array is:");
	cumulative(head);
	display(head);
	return 0;
}
