#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>


int add(int n,...){
int sum = 0;
va_list ptr;
va_start(ptr,n);

for(int i=0;i<n;i++){
sum += va_arg(ptr,int);
}

va_end(ptr);

return sum;
	
}

int main(){
//int n;
//printf("Enter no. of args\n");
//scanf("%d",&n);
printf("Addition of all numbers is:%d ",add(3,12,2,3));
return 0;
}
