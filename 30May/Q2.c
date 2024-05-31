/*
Author : Shreerang Patil
Remove adjacent duplicates
Date : 30 May 2024
*/

#include <stdio.h>
#include<string.h>
int main()
{
 char test[100];
char ans[100];
int j=0;
 printf("Enter string: \n");
scanf("%s",test);
int n = strlen(test);
char prev = test[0];
for(int i=1;i<strlen(test);i++){
  if(prev != test[i]){
      ans[j] = prev;
      j++;
      prev = test[i];
  }else{
      while(i < n && prev == test[i]){
          i++;
      }
      prev = test[i];
  }

}
if(test[n-1] != test[n-2]){
    ans[j] = prev;
}
printf("%s\n",ans);

    return 0;
}
