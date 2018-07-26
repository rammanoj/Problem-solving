#include<stdio.h>
int main()
{
	int n, a=1,b=1,c,sum;
	scanf("%d", &n);
	sum=a+b;
	if(n == 1)
	{
		printf("%d\n", n);
		return 0;
	}
	for(int i=0; i<n-2; i++)
	{
		c=a+b;
		a=b;
		sum = sum + c;
		b=c;
	}
	printf("%d\n", sum);
}
