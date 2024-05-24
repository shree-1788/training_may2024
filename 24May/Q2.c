
/*
 Author : Shreerang Patil
 Nearest whole square
Date : 24 May 2024
  */

#include<stdio.h>
#include<math.h>

int main(){

int n;
double near=0,far=0;
printf("Enter your number : \n");
scanf("%d",&n);

 near =floor(sqrt(n));
 
 far =ceil(sqrt(n));


near *= near;
far *= far;


if((n - near) >(far - n))
printf("Nearest square is %.1lf\n",far);
else
printf("Nearest square is %.1lf\n",near);



return 0;
}

