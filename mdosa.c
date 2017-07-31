#include<stdio.h>

int main(void)
{
	long long int t,n,i;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&n);
		if(n%2==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
