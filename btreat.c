#include<stdio.h>

int main(void)
{
	long long int t,i,j;
	long long int n,sum,count;
	long long int a[1000001];
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		sum=0;
		count=0;
		scanf("%lld",&n);
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
			sum=sum+a[j];
		}
		if(sum%n!=0)
			printf("NO\n");
		else
		{
			sum=sum/n;
			for(j=0;j<n;j++)
			{
				if(a[j]<sum)
				{
					count=count+(sum-a[j]);
				}
			}
			printf("%lld\n",count);
		}
		
		
	}
	return 0;
}
