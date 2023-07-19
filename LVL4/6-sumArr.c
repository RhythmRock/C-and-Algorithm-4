#include <stdio.h>

int main()
{
	int sayilar[] = {1,9,2,8,3};
	int length = sizeof(sayilar) / sizeof(int);
	int i, sum = 0;
	
	for(i = 0; i < length; i++)
	{
		sum += sayilar[i];
	}
	
	printf("Toplam: %d", sum);
	
	return 0;
}
