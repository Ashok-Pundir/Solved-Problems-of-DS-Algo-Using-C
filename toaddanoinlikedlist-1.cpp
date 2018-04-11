#include<stdio.h>
#include<stdlib.h>

struct node
	{
		int info;
		node *next;
	};
void display(node *top)
{
	node *t=NULL;
	t=top;
	while(t!=NULL)
	{
		printf("%d ",t->info);
		t=t->next;
	}
	free(t);	
}
node* insertInSorted(node *top,int k)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->info=k;
	p->next=NULL;
	
	node* t=top;
	if(top->info>=k)
	{
		p->next=top;
		top=p;
	}
	else
	{
		while(t->next->info<=k)
		{
			t=t->next;
		}
		p->next=t->next;
		t->next=p;
		
	}
	return top;	
}

node * insert(node *top,int num)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->info=num;
	p->next=NULL;
	
	if(top==NULL)
	{
		top=p;
	}	
	else
	{
		node *t=NULL;
		t=top;
		while(t->next!=NULL)
			t=t->next;
			
		t->next=p;
	
	}
	return top;
}	
int main()
{
	node *top=NULL;
	int num,k;
	do
	{
	printf("Enter the nodes:-");
	scanf("%d",&num);
	top=insert(top,num);
	printf("Do you want to enter more nodes:-(Press 1 else 0)");
	scanf("%d",&num);	
	}while(num==1);
	printf("\n Array is :");
	display(top);
	printf("\nEnter the no to insert:-");
	scanf("%d",&k);	
	top=insertInSorted(top,k);
	printf("\n Array is :");
	display(top);
	return 0;
}
