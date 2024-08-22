/*
 ============================================================================
 Name        : Alphabet.c
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
	char ch;

	printf("Enter a char to check on alphabet or not:\n");
	scanf("%c", &ch);

	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		printf("Your entered character %c is alphabet.",ch);
	else printf("Your entered character %c is not alphabet.", ch);




}
