






/*
Author : Shreerang Patil
Arithmetic operation
Date : 23 May 2024
  */

#include<stdio.h>
int main()
{
	double height,weight,bmi;

printf("Enter Height in meter : \n");
scanf("%lf",&height);
printf("Enter Weight in kg : \n");
scanf("%lf",&weight);
bmi = weight / (height * height);

if(bmi >= 30 ){
printf("Obesity");
}else if(bmi >= 25 && bmi <= 29.9){
printf("Overweight");
}else if(bmi >= 18.5 && bmi <= 24.9){
printf("Normal Weight");
}else{
printf("Underweight");
}
return 0;
}
