#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int t=a[0];
	for(int i=1;i<n;i++)
	{
		
		t^=a[i];
	
	}
		printf("The Non repeting no is %d",t);	
}
