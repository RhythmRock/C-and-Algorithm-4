#include <stdio.h>

int main()
{
	int arr[100];
	int n, i = 0;
	
	printf("Sayi Gir (0 - Cikis)\n");
	
	do
	{
		printf("%d. Sayiyi Gir: ", i + 1);
		scanf("%d",&n);
		
		if(n != 0 && i < 100)
		{
			arr[i] = n;
			i++;
		}
	}
	while(n != 0);
	
	printf("Dizinin Eleman Sayisi: %d", i);
	
	return 0;
}
