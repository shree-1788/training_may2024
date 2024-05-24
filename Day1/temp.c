

/*
Author : Shreerang Patil
Arithmetic operation
Date : 23 May 2024
  */

#include<stdio.h>
int main(){
float temp;
float far;
printf("Enter temperature in celcius: ");
scanf("%f",&temp);
far = (9 * temp)/5 + 32;
printf("\nTemperature in far is : %f\n",far);
return 0;
}
