/*
Author : Shreerang Patil
Remove duplicates if presnt in lexi order
Date : 30 May 2024
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void removeLexi(char *str);

int main(){


char str[100];
printf("Enter your string\n");
scanf("%s",str);

removeLexi(str);
printf("%s\n",str);

return 0;
}

void removeLexi(char str[]){
int i=0,j=0;
int len = strlen(str);

while(1){
bool flag = false;
for(i=0,j=0;i<len;i++){
if(i < len-1 && str[i+1] - str[i] == 1){
	i++;
	flag = true;
}else{
	str[j++] = str[i];
}
}
if(!flag) break;

str[j] = '\0';
len = j;


}}
