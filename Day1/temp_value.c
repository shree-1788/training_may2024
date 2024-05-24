





/*
Author : Shreerang Patil
Arithmetic operation
Date : 23 May 2024
  */

#include<stdio.h>
int main()
{
	int temp;

printf("Enter temperature : \n");
scanf("%d",&temp);


if(temp > 30){
printf("it's hot outside, stay hydrated!");
}else if(temp >= 20 && temp <= 30){
printf("The weather is nice and warm.");
}else if(temp >= 10 && temp <= 19){
printf("It's a bit chilly, wear a jacket.");
}else{
printf("It's cold outside, stay warm!");
}
return 0;
}
