




/*
 Author : Shreerang Patil
Remove duplicates
Date : 24 May 2024
  */

#include<stdio.h>
#include<math.h>

int main(){

int size,start=0,j=1;
printf("Enter size of array: \n");
scanf("%d",&size);
int a[size],ans[size];
printf("Enter your elements in array: \n");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}

for(int i=0;i<size;i++){
for(int j= i+1;j<size;j++){
if(a[i] > a[j]){
int swap = a[i];
a[i] = a[j];
a[j] = swap;
}
}
}

ans[0] = a[0];



int curr = a[0];
for(int i=1;i<size;i++){
  if(a[i] != curr ) {
  ans[j] = a[i];
  curr = a[i];
  j++;
  }
}

printf("Your array without duplicates is: \n");

for(int i=0;i<j;i++){
printf("%d\t",ans[i]);
}

printf("\n");
return 0;




}








 






