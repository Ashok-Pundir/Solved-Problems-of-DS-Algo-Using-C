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
node* rotateAcrossPivot(node *top,int k)
{
	
	node* t=top;
	int c=1,cf=1;
	while(t->next!=NULL)
	{
		c++;
		t=t->next;
	}
	t=top;
	while(cf!=(c-k))
	{
		t=t->next;
		cf++;
	}
	node* t1=t;
	while(t1->next!=NULL)
	{
		t1=t1->next;
	}
	t1->next=top;
	top=t->next;
	t->next=NULL;
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
	int num,p;
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
	printf("\nEnter the Pivot no:-");
	scanf("%d",&p);	
	top=rotateAcrossPivot(top,p);
	printf("\n Array is :");
	display(top);
	return 0;
}
