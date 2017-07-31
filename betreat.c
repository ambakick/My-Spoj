#include<stdio.h>

int main(void)
{
	int t;
	long long int j,b;
	long long int n,sum,count;

	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		count=0;
		scanf("%lld",&n);
			long long int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%lld",&a[j]);
			sum=sum+a[j];
		}
		if(sum%n!=0)
			printf("No Treat\n");
		else
		{
			sum=sum/n;
			for(j=0;j<n;j++)
			{
				if(a[j]>sum)
				{
					count=count+(a[j]-sum);
				}
			}
			printf("%lld\n",count);
		}
		
		
	}
	return 0;
}
