#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(1)
	{
		n = n + 1;
		int arr[4];
		int tmp = n;
		for(int i=0; i<4; i++)
		{
			arr[i] = tmp%10;
			tmp = tmp/10;
		}
		int check = 0;
		for(int i=0; i<4; i++)
		{
			for(int j=1; j<4; j++)
			{
				if( i != j && arr[i] == arr[j])
				{
					check = 1;
				}
			}
		}
		if(check == 0)
		{
			printf("%d\n", n);
			return 0;
		}
	}
}

//problem link - https://codeforces.com/problemset/problem/271/A
