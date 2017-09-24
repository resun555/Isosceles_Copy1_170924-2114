// IsoscelesCopy1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning ( disable : 4996 )
#include <stdio.h>


int main()
{
	size_t n;
	scanf("%d", &n);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		for (size_t j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		for (size_t j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		if (i < n - 1)
		{
			printf("\n");
		}
	}
    return 0;
}

