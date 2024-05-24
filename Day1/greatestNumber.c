



/*
Author : Shreerang Patil
Arithmetic operation
Date : 23 May 2024
  */

#include<stdio.h>
int main()
{
	int num1,num2,num3;

printf("Enter your num1 : \n");
scanf("%d",&num1);
printf("\nEnter your num2 : \n");
scanf("%d",&num2);
printf("\nEnter your num3 : \n");
scanf("%d",&num3);


if((num1 > num2) && (num1 > num3)){
printf("Greatest number is num1 : %d",num1);
}else if(num2 > num3){
printf("Greatest number is num2 : %d",num2);
}else{

printf("Greatest number is num3 : %d",num3);
}
return 0;
}
