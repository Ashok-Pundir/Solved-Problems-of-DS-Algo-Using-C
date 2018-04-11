#include<stdio.h>
int trailingZeroInFact(int n)
{
	//Calulating no. of 5s in Prime Factors of n!
	int i=5,count=0;
	while(n/i>=1)
	{
		count+=n/i;
		i=i*5;	
	}
	return count;
}
int main()
{
	int x,ans;
	printf("Enter a no:-");
	scanf("%d",&x);
	ans=trailingZeroInFact(x);
	printf("The traling Zeros in %d are= %d",x,ans);
}

