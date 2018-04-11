#include<stdio.h>
void printArray(int a[6][5],int n,int m)
{
	int i=0,j=0,k=0;//i=starting row index j=starting coloum index k=for iteration only
	while(i<n&&j<m)
	{
		//Clockwise direction
		
		k=j;
		while(k!=m)
		{
			printf("%d ",a[i][k++]);
		}
		i++;
		
		k=i;
		while(k!=n)
		{
			printf("%d ",a[k++][m-1]);
		}
		m--;
		
		if(i==n)//terminating condition when i becomes n or greater them n
		break;
		
		k=m-1;
		while(k>=j)
		{
			printf("%d ",a[n-1][k--]);
		}
		n--;
			
		if(j==m)//terminating condition when j becomes n or greater them m
		break;
		
		k=n-1;
		while(k>=i)
		{
			printf("%d ",a[k--][j]);
		}
		j++;
		
		//Anticlock wise
		
		if(i==n)//terminating condition when i becomes n or greater them n
		break;
		
		k=i;
		while(k!=n)
		{
			printf("%d ",a[k++][j]);
		}
		j++;
		
		if(j==m)//terminating condition when j becomes n or greater them m
		break;
		
		k=j;
		while(k!=m)
		{
			printf("%d ",a[n-1][k++]);
		}
		n--;
		
		k=n-1;
		while(k>=i)
		{
			printf("%d ",a[k--][m-1]);
		}
		m--;
		
		k=m-1;
		while(k>=j)
		{
			printf("%d ",a[i][k--]);
		}
		i++;
	}
}
int main()
{
	int n=6,m=5,arr[6][5]={{1,2,3,4,5},
						{6,7,8,9,10},
						{11,12,13,14,15},
						{16,17,18,19,20},
						{21,22,23,24,25},
						{26,27,28,29,30}};
	printArray(arr,n,m);		
				
}
