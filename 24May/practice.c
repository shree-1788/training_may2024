/*
Author : Shreerang Patil
Practice
Date : 24 May 2024
  */


#include<stdio.h>
#define SIZE 50
int main(){

int size;
printf("Enter size of your array less than 50\n");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
	scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
	printf("%d\t",arr[i]);
}

printf("\n\n");

for(int i=0;i<size;i++){
	for(int j=i+1;j<size;j++){
	if(arr[i]>arr[j]){
		int swap = arr[i];
	arr[i]= arr[j];
	arr[j] = swap;

	}
}
}

printf("Sorted array in ascending order is : ");
for(int i=0;i<size;i++){
printf(" %d ",arr[i]);
}
printf("\n");


for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if(arr[i] < arr[j])
{
	int swap = arr[i];
	arr[i] = arr[j];
	arr[j] = swap;
}
}
}

printf("Sorted element in desending order is : ");

for(int i=0;i<size;i++){
	printf(" %d ",arr[i]);
}

printf("\n");
while(1){

printf("Now you can search int the array\n");
printf("Enter element you want to search.\n");
int x;
scanf("%d",&x);
for(int i=0;i<size;i++){
if(arr[i] == x)
{
printf("Element found %d exist in the array.",x);
break;
}
if(i == size-1) {
printf("Such element does not exist.");
break;
}
}


printf("\n\n");
printf("To exit press 'x'\n");
char c;
scanf(" %c",&c);

if(c == 'x') return 0;

}


printf("\n\n");

return 0;
}
