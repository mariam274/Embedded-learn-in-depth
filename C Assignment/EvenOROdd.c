/*
 ============================================================================
 Name        : EvenOROdd.c
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
	int x;

	printf("Enter your number to check even or odd:");
	scanf("%d", &x);

	if(x%2==0)
	 printf("your number is even");
	else printf("your number is odd");



}
