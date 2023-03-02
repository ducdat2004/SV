#include <stdio.h>
main()
{
	long long int n, dem = 0;
	double tong = 0;
	scanf("%lld", &n);
	double a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%lf", &a[i]);
	}
	double tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j])
			{
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    for(int i = 0; i < 3; i++)
    {
    	printf("%.1lf ", a[i]);
	}
	double min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(min > a[i])
		{
			min = a[i];
		}
		tong += a[i];
	}
	double tbc;
	tbc = tong / n;
	printf("\n%.1lf %.1lf", min, tbc);
}
