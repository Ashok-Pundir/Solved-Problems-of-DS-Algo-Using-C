#include<stdio.h>
int print(int a[4][4],int x,int y,int d)
{
	/*for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(a[i][j]==d)
			return 1;
		}	
	}
	return 0;*/
	int i=0;
	int j=y-1;
	int t=a[i][j];
	while(i!=x&&j!=-1)
	{
		    if(a[i][j]==d)
		    return 1;	
			else if(t<d)
			{
			i++;
			t=a[i][j];
	
			}
			
			else 
		 	{  
			j--;
			t=a[i][j];
		 	}
	}
	return 0;
}
		
	

int main()
{
	int n=4,m=4,ans,k;
	int a[4][4]={{1,5,10,15},
			   {2,6,11,16},
			   {3,7,12,17},
			   {4,8,13,18}};
			   printf("Enter the element to search:-");
			   scanf("%d",&k);
	ans=print(a,n,m,k);
	if(ans==1)
	printf("Element found");
	else
	printf("Element not found");
	return 0;
}

