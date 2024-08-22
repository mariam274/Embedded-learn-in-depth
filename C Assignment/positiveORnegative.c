/*
 ============================================================================
 Name        : positiveORnegative.c
 Author      : marioma
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x;

	printf("Enter a num to check +ve or -ve:\n");
	scanf("%f",&x);

	if(x<=0)
	{
		if(x==0)
			 printf("You entered zero number.");

		else printf("Your number is -ve value.");

	}

	else printf("Your number is +ve.");




}
