/*
 ============================================================================
 Name        : swap.c
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
	int x,y,temp1,temp2;

	printf("Enter two numbers:");
	scanf("%d %d", &x,&y);
	printf("your numbers: %d %d", x,y);
	temp1=x;
	temp2=y;
	x=temp2;
	y=temp1;

	printf("number after swap: %d %d", x,y);


}
