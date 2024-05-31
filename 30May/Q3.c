/*
Author : Shreerang Patil
Sort string and place |
Date : 30 May 2024
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

    char str[1024];
    char temp[100];
    int j=0;
    printf("Enter string: \n");
    fgets(str,1024,stdin);
    char words[1000][1000];
    char *token = strtok(str,"|");
    while(token != NULL){
        strcpy(words[j],token);
        j++;
        token = strtok(NULL,"|");
    }

    for(int i=0;i<j;i++){
        for(int k=i+1;k<j;k++){
            if(strcmp(words[i],words[k]) > 0){
                strcpy(temp,words[i]);
                  strcpy(words[i],words[k]);
                    strcpy(words[k],temp);
            }
        }
    }
    for(int i=0;i<j;i++){
       if(i != j -1)
        printf("|%s",words[i]);
        else
        printf("|%s|",words[i]);
    }
    return 0;
}
