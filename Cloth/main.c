#include <stdio.h>
#include <string.h>
#include "cloth.h"
#define N 3

void printCloth(Cloth cloth)
{
	printf("%s sale for %.1f made in %s evaluate %.1f sell %d\n", cloth.name, cloth.price, cloth.area, cloth.score, cloth.volume);
}

char *getMaxPriceName(Cloth *cloths, int count)
{
	Cloth clothWithMaxPrice = {clothWithMaxPrice.price = 0};

	for (int i = 0; i < count; i++)
	{
		if (cloths[i].price > clothWithMaxPrice.price)
		{
			//clothWithMaxPrice.name=cloths[i].name;
			strcpy(clothWithMaxPrice.name, cloths[i].name);
		}
	}

	return clothWithMaxPrice.name;
}

int main(void)
{
	Cloth cloths[N];

	strcpy(cloths[0].name, "skirt");
	cloths[0].price = 20;
	strcpy(cloths[0].area, "China");
	cloths[0].score = 3.1;
	cloths[0].volume = 100;

	strcpy(cloths[1].name, "short");
	cloths[1].price = 30;
	strcpy(cloths[1].area, "China");
	cloths[1].score = 5.1;
	cloths[1].volume = 3000;

	strcpy(cloths[2].name, "sweater");
	cloths[2].price = 40;
	strcpy(cloths[2].area, "China");
	cloths[2].score = 4;
	cloths[2].volume = 2000;

	for (int i = 0; i < N; i++)
	{
		printCloth(cloths[i]);
	}
	printf("The most expensive cloth %s\n", getMaxPriceName(cloths, N));

	return 0;
}
