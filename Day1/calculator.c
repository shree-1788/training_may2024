/*
Author : Shreerang Patil
Calculator
Date : 23 May 2024
 */

#include<stdio.h>
#include<stdlib.h>
int main(){


char op;
int num1, num2;
printf("welcome to the calculator\n");
while(1){
printf("Choose the operator '+' '-' '*' '/'\n To close the cal press x\n");
scanf("%s",&op);
if(op == 'x') exit(0);
printf("\nchoose two numbers: \n");
scanf("%d %d",&num1,&num2);

switch(op){

	case '+':
		printf("Addition of ur numbers is: %d",num1 + num2);
		break;
		
	case '-':
		printf("Substraction of ur numbers is: %d",num1 - num2);
		break;

	case '*':
		printf("Multi of ur numbers is: %d",num1 * num2);
		break;

	case '/':
		printf("Division of ur numbers is: %d",num1 / num2);
		break;

	default:
		break;
}

printf("\n");
}






return 0;
}
