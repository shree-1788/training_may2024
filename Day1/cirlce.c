
/*
Author : Shreerang Patil
Arithmetic operation
Date : 23 May 2024
  */

#include<stdio.h>
#define PI 3.14
int main(){
float radius;
float area, circum;
printf("Enter radius of circle : ");
scanf("%f",&radius);
area = PI * radius * radius;
circum = 2 * PI * radius;
printf("\nArea of circle is : %f\n",area);
printf("\nCircumference of circle is : %f\n",circum);
return 0;
}
