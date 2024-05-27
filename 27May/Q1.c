/*
Author : Shreerang Patil
Finding duplicates in an arary
Datre : 27 May 2024
*/

#include<stdio.h>
#include<stdlib.h>
void dupliArray(int size,int arr[]);
int main(){

	int size;
	printf("Enter size of the array : \n");
	scanf("%d",&size);

int arr[size];
printf("Enter elemnts of array: \n");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
int n = sizeof(arr) / sizeof(arr[0]);
dupliArray(n,arr);

return EXIT_SUCCESS;
}

}

void dupliArray(int size,int arr[]){
int res[size];
int curr=0,j=0;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if(arr[i] > arr[j]){
int temp =  arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}}
curr = arr[0];
for(int i=1;i<size;i++){
if(arr[i] == curr){
res[j] = arr[i];
printf("%d\t",res[j]);
j++;
while(arr[i] == curr){
i++;
}
curr = arr[i];
}}
printf("Duplicate array is: \n");
for(int i=0;i<j;i++){
printf("%d\t",res[i]);
}
}
