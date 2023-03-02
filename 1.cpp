#include <stdio.h>

main()
{
	long long int n,tong = 0, dem = 0;
	long long int  du;
	scanf("%lld", &n);
	while(n != 0)
	{
		if(n % 2 != 0)
		{
			dem++;
			du = n % 10;
			tong += du;	
		}
		n = n / 10;
	}
	printf("%lld %lld", dem, tong);
}
