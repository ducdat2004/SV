#include <stdio.h>

main()
{
	int a[100];
	int n,k,i,g;
	printf("So phan tu cua mang: ");
	scanf("%d", &n);
	printf("Vi tri muon chen`: ");
	scanf("%d", &k);
	printf("Gia tri muon chen`: ");
	scanf("%d", &g);
	for(i = 0; i < n; i++)
	{
		printf("A[%d]: ", i+1);
		scanf("%d", &a[i]);
	}
	for(i = n; i > k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = g;
	n += 1;
	printf("Mang sau khi chen` la`: \n");
	for(i = 0; i < n; i++)
		printf("%4d", a[i]);
}
