/*
 Author : Shreerang Patil
 Sum of digits
Date : 24 May 2024
  */

#include<stdio.h>

int main(){

int n,sum = 0;
printf("Enter your number : \n");
scanf("%d",&n);

while(n > 0){
int x = n%10;
sum += x;
n /= 10;
}

printf("Sum of digits is : %d\n",sum);

return 0;
}

