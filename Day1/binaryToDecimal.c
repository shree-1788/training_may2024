
/*
Author : Shreerang Patil
Arithmetic operation
Date : 23 May 2024
  */

#include<stdio.h>
#include<math.h>
int main(){

	int num,power=1,result=0;
	printf("Enter your bianry number\n");
	scanf("%d",&num);

	while(num > 0){
	int n = num %10;
	result += n * power;
	power *= 2;
	num /= 10;
	}
	printf("\nYour conversion is: %d",result);
return 0;
}
