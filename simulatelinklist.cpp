#include<stdio.h>
#include<stdlib.h>
#define INF 9999//INF is to show that this place is empty
struct node
{
	int info;
	int next;
}a[100];
int insert(node *a,int *top,int num)
{	
	int pos=0,c=0,pos2=0,t,min=INF,max=-1,jmin=-1;//jmin is for the just smallest no then the no which is sent by user.
	if(*top==-1)
	{
		a[++(*top)].info=num;
		a[*top].next=-1;//-1 for NULL
	}
	else 
	{
		t=0;
		while(a[t].next!=INF)
		{
			if(min>a[t].info)
			{
				min=a[t].info;
				pos=t;
			}
			if(max<a[t].info)
			{
				max=a[t].info;
				pos2=t;
			}
			t++;
		}
		
		a[t].info=num;
		
		if(num<=min)
		{
			a[t].next=pos;
			*top=t;
		}
		else if(num>min&&num<max)
		{
			int	t2=*top;
			while(a[t2].next!=-1)
			{
				if(a[t2].info<=num)
				{
					jmin=t2;
					t2=a[t2].next;
				}
			}
			a[jmin].next=t;
			a[t].next=t2;
		}	
		else
		{
			a[pos2].next=t;
			a[t].next=-1;
		}	
	}
}	
void display(node *a,int top)
{
	if(top==-1)
	{
		printf("\nArray is empty");
	}
	else
	{
		while(a[top].next!=-1)
		{
			printf("%d ",a[top]);
			top=a[top].next;
		}
		printf("%d ",a[top]);
	}
}
int main()
{
	int n,x,i;
	int top=-1; 
	for(i=0;i<100;i++)
		a[i].next=INF;
	do
	{
		printf("\nPress 1 to add a no.\nPress 2 to display the list\nPress # to exit:-");
		scanf("%d",&n);
		switch(n)
		{
			case 1:	printf("\nEnter a no:-");
					scanf("%d",&n);
					insert(a,&top,n);
					break;
			case 2:display(a,top);
					break;
			case 3: break;
			default:printf("\nYou entered a wrong choice");
		}
	}while(n!='#');
}
