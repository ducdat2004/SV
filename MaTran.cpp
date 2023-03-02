#include <stdio.h>
main()
{
	long long int n,m;
	scanf("%lld %lld", &n,&m);
	long long int a[n][m];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++)
	{
		long long int min = a[i][0];
		for(int j = 0; j < m; j++)
		{		
			if(min > a[i][j])
			{
				min = a[i][j];	
			}
//			a[i][j] -= min;
		}
		for(int k = 0; k < m; k++)
		{
			a[i][k] -= min;
		}
		//printf("%d", min);
	}
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			long long int min = a[i][0]; 
//			
//		}
		
//	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
}
