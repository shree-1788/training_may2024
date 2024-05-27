#include<stdio.h>
#include<stdlib.h>
#include<cal_fun.h>
int main(){

int num1,num2,result;
char op;
printf("Enter two numbers: \n");
scanf("%d %d",&num1,&num2);
printf("Enter operator\n");
scanf(" %c",&op);

switch(op){
	case '+' : printf("Sum of two no. is : %d\n",add(num1,num2));
		   break;
	case '-' : printf("Diff of 2 no. is : %d\n",sub(num1,num2));
		   break;
	case '*' : printf("Product of 2 no. is : %d\n",mul(num1,num2));
		   break;
	case '/' : printf("Diff of 2 no. is : %d\n",divi(num1,num2));
		   break;
	default: printf("Your op is invalid\n");
		 break;
}





return  EXIT_SUCCESS;
}
