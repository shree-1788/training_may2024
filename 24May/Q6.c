



/*
 Author : Shreerang Patil
Leaders in array
Date : 24 May 2024
  */

#include<stdio.h>
#include<math.h>

int main(){

int size;
printf("Enter size of array: \n");
scanf("%d",&size);
int a[size],ans[size],j=1;
printf("Enter your elements in array: \n");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}

ans[0] = a[size-1];

int curr = a[size-1];
for(int i=size-2;i>0;i--){
  if(a[i] > curr) {
  ans[j] = a[i];
  curr = a[i];
  j++;
  }
}

printf("Your leaders array is: \n");

for(int i=0;i<j;i++){
printf("%d\t",ans[i]);
}

printf("\n");
return 0;




}








 






