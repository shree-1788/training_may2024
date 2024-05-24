

/*
 Author : Shreerang Patil
Automorphic number
Date : 24 May 2024
  */

#include<stdio.h>
#include<math.h>

int main(){

int n,sq=0,digits=0,dupli=0;
printf("Enter your number : \n");
scanf("%d",&n);

sq = n * n;
dupli = n;

while(dupli > 0){
digits++;
dupli /= 10;
}

digits = pow(10,digits);

if(n == (sq % digits))
printf("Your number is a automorphic number.");
else printf("your number is not a automorphic number\n");

return 0;


 





return 0;
}

