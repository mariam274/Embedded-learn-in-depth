/*
 ============================================================================
 Name        : calculator.c
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
	float x,y;
	char op;
	printf("calculator, enter two integer:");
	scanf("%f %f",&x,&y);

    printf("enter your operator:");
    scanf("%c",&op);

    switch(op)
    {
    case'+': printf("the sum:%.2f", x+y);
             break;
    case'-': printf("their subtract: %.2f", x-y);
             break;
    case'*': printf("their multiply: %.2f",x*y);
             break;
    case'/': if(y==0) printf("error");
             else printf("their division:%.2f", x/y);
    	     break;
    default: printf("We cannot recognize your entered sign.");
             break;


    }



}
