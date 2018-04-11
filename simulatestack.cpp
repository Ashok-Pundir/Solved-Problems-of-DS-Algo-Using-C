#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	node* next;
};
node * push(node *top,int num)
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
		p->next=top;
		top=p;
	}
	return top;
}	
int pop(node **top)
{
	if(*top==NULL)
	{
		printf("\nStack is empty");
		return -1;
	}
	else
	{
		node *t1=*top;	
		int t=(*top)->info;
		*top=(*top)->next;
		free(t1);
		return t;
	}
}
int main()
{
	int n,x;
	node *top=NULL;
	printf("\nEnter the no:");
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		top=push(top,i);
	}	

	for(int i=n-1;i>0;i--)
	{
		x=pop(&top);
		x+=top->info;
		top=top->next;
		if(top==NULL)
		{
			printf("\nThe sum is:%d",x);
			return 0;
		}
		top=push(top,x);
	}
	
	
}
