#include <stdio.h>

//Dizi Uzunlugunu Bulan Algoritma

int main()
{
	int array[5] = {1,2,3,4,5};
	int i = 0;
	
	do
	{
		if(array[i + 1] != '\0')
		{
			i++;
		}
	}
	while(array[i + 1] != '\0');
	
	printf("Array Uzunlugu: %d", i+1);
	
	return 0;
}
