


/*
 Author : Shreerang Patil
Armstrong  number
Date : 24 May 2024
  */

#include<stdio.h>
#include<math.h>

int main(){

int sum=0,n,digits=0,dupli=0;
printf("Enter your number : \n");
scanf("%d",&n);

digits = (n ==0) ? 1 : 1 + log10(n);
dupli = n;


while(dupli > 0){
int x = dupli % 10;
sum += pow(x,digits);
dupli /= 10;
}





if(n == sum)
printf("Your number is a Armstrong number.\n");
else printf("your number is not a Armstrong number\n");

return 0;


 





return 0;
}

