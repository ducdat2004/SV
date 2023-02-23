#include <stdio.h>
#include <math.h>
//void check (int n)
//{
//	do{
//		scanf("%d", &n);
//		if(n < 10 || n > 100)
//		{
//			printf("10 <= n <= 100");
//		}
//	}while(n < 10 || n > 100);
//}
//void Nhap (int a[], int n)
//{
//	for(int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//}
int tbc (int a[], int n)
{
	int count = 0;
	float tong = 0, tbcc;
	for(int i; i < n; i++)
	{
		if(i % 2 != 0 && a[i] > 0)
		{
			count++;
			tong += a[i];
		}
	}
	for(int i; i < n; i++)
	{
		if(a[i] > 0 && i % 2 != 0)
		{
			tbcc = tong / count;
		}
	}
	return tbcc;
}
main()
{
	int n;
	int dem = 0, count = 0;
	float tong = 0, tbcc;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		int j = 0;
		while(j * j <= a[i])
		{
			if (j * j == a[i])
			{
				printf("%d ", a[i]);
				dem ++;
			}
			j++;
		}
	}
	if(dem == 0)
	{
		printf("Day khong co so chinh phuong");
	}
	printf("\nTBC = %d",tbc(a, n));
//	for(int i; i < n; i++)
//	{
//		if(i % 2 != 0 && a[i] > 0)
//		{
//			count++;
//			tong += a[i];
//		}
//	}
//	for(int i; i < n; i++)
//	{
//		if(a[i] > 0 && i % 2 != 0)
//		{
//			tbcc = tong / count;
//		}
//	}
//	printf("%f", tbcc);
}
