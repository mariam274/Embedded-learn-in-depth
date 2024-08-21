/*
 ============================================================================
 Name        : GreatestNUM.c
 Author      : marioma
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x,y,z;

	printf("Enter three numbers to get the greatest:\n");
	scanf("%f %f %f", &x,&y,&z);

	if(x>y&&x>z)
		printf("the greatest num: %.2f", x);
	else if(y>x&&y>z)
		printf("the greatest num: %.2f", y);
	else if(z>x&&z>y)
		printf("the greatest num: %.2f", z);


}
