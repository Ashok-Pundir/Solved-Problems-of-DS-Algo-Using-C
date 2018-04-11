#include<stdio.h>
void insert(int *a,int *f,int *r,int n,int num)
{
	if(*r==-1)
	{
		*r=*f=0;
		a[*r]=num;
	}
	else if(((*r+1)%n)==*f)
	{
		printf("\nQueue is full\n");
		return;
	}
	else
	{
		*r=(*r+1)%n;
		a[*r]=num;
	}
}
int remove(int *a,int *f,int *r,int n)
{
	int temp;
	if(*f==-1)
	{
		printf("\nQueue is empty\n");
		return 0;
	}
	else if(*f==1&&*r==1)
	{
		temp=a[*f];
		*f=*r=-1;
		return temp;
	}
	else if(*f==*r)
	{
		temp=a[*f];
		*f=*r=-1;
		return temp;
	}
	else
	{
		temp=a[*f];
		*f=(*f+1)%n;
		return temp;
	}
}
void display(int *a,int f,int r,int n)
{
	if(f==-1)
	{
		printf("\nQueue is Empty\n");
	}
	else
	{
		while(f!=r)
		{
			printf("%d ",a[f]);
			f=(f+1)%n;
		}
		if(f==r)
		{
			printf("%d ",a[f]);
		}
	}
	printf("\n");
}
int main()
{
	int a[20],n,num,front=-1,rear=-1,size=20,temp,no;
	do
	{
		printf("Press 1 to Add No.\nPress 2 to Remove No.\nPress 3 to Display Queue\nPress 4 to Exit:-");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("\nEnter a No:-");
					scanf("%d",&no);
					insert(a,&front,&rear,size,no);
					break;
			case 2:temp=remove(a,&front,&rear,size);
					if(temp!=0)
					printf("\nThis no %d is succesfully removed..\n",temp);
					break;
			case 3:display(a,front,rear,size);
					break;
			case 4:break;
			default:printf("\nYou entered a Wrong choice!!!\n");
		}
	}while(n!=4);
}
