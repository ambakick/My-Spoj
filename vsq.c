#include<stdio.h>
#include<algorithm>
int main()
{
	
	long long n,q,a,b,count,i;
	scanf("%lld",&n);
	long long int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}
	
	scanf("%d",&q);
	while(q--)
	{
		count=0;
		scanf("%lld %lld",&a,&b);
		for(i=0;i<n;i++)
		{
			if(arr[i]>=a&&arr[i]<=b)
			count++;
		}
		printf("%lld\n",count);
	}
	return 0;
}
