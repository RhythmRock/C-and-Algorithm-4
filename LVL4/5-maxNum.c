#include <stdio.h>

int main()
{
	int sayilar[] = {1,9,2,8,3};
	int length = sizeof(sayilar) / sizeof(int);
	int max = sayilar[0];
	int i, maxi = 0;
	
	for(i = 1; i < length; i++)
	{
		if(max < sayilar[i])
		{
			max = sayilar[i];
			maxi = i;
		}
	}
	
	printf("%d Index Numalari Sayi En Buyuk: %d", maxi, max);
	
	return 0;
}
