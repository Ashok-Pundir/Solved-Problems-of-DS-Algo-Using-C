#include<stdio.h>
void print_arr(char *str,int x,int c);
int main()
{
	int n,i,comb=1;
	printf("Enter the size of string:-");
	scanf("%d",&n);
	char str[n];
	
	printf("Enter the elements:-"); 

		scanf("%s",str);
	
	for(i=0;i<n;i++)
	{
		comb=comb*2;
	}
	
	print_arr(str,n,comb-1);
	return 0;
}
void print_arr(char *str,int x,int c)
{
	printf("\n");
	char str2[x+1];
	int i=0,v,t,j;
	

while(i<=c)
	{
		v=i;
		for(t=x-1;t>=0;t-=1)
		{
			if((v&1)==1)
			{
				str2[t]=1;
				v=v>>1;	
			}
			else
			{
				str2[t]=0;
				v=v>>1;	
			}
		}	
		for(j=0;j<x;j++)
		{
			if(str2[j]==0)
			printf("%c",str[j]);
			else
			printf("%d",str2[j]);
		}
		printf("\n");
		i++;
	}
}