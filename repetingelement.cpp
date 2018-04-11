#include<stdio.h>
int main()
{
	int n,g,i;
	printf("Enter the size:");
	scanf("%d",&n);
	int arr[n];
	int t[n]={0};
	printf("\nEnter Array Numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		t[arr[i]]=t[arr[i]]+1;
	}
	for(i=0;i<n;i++)
	{
		if(t[i]==2)
		{
		printf("The no is:%d\n",i);
		}
	}
}
