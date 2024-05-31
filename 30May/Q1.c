/*
Author : Shreerang Patil
Capitalise first char
Date : 30 May 2024
*/


#include <stdio.h>
#include<string.h>
int main()
{
    char test[1000];
    char ans[100][100];
    int j =0;
   printf("Enter the string: \n");
   fgets(test,1000,stdin);
   
   
  char *token = strtok(test," ");
  while(token != NULL){
      strcpy(ans[j],token);
      j++;
      token = strtok(NULL," ");
  }
 
   
   
  for(int i=0;i<j;i++){
      char ch = toupper(ans[i][0]);
      ans[i][0] = ch;
  }
   
for(int i=0;i<j;i++){
    printf("%s ",ans[i]);
}

    return 0;
}


