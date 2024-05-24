




/*
Author : Shreerang Patil
Arithmetic operation
Date : 23 May 2024
  */

#include<stdio.h>
int main()
{
	int score;

printf("Enter your score from (0-100) : \n");
scanf("%d",&score);


if(score >= 90 && score <= 100){
printf("Grade is A");
}else if(score >= 80 && score <= 89){
printf("Grade is B");
}else if(score >= 70 && score <= 79){
printf("Grade is C");
}
else if(score >= 60 && score <= 69){
printf("Grade is D");
}else{
printf("Grade is F");
}
return 0;
}
