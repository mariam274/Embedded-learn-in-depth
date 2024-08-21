/*
 ============================================================================
 Name        : vowelORnot.c
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
	char x;
	printf("Enter a char to check whether vowel or not:\n");
	scanf("%c", &x);

	if(x=='a'||x=='i'||x=='o'||x=='e'||x=='u')
		printf("your char is vowel");
	else printf("your char is consonant");


}
