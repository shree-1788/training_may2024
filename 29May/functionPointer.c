#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int sub(int a,int b) {return a-b; }
int add(int a,int b){
return a + b;
}
int main(){
int sum,diff;
int n1,n2;
printf("Enter two numbers: \n");
scanf("%d%d",&n1,&n2);
int (* arith)(int,int);
arith = add;
sum = arith(n1,n2);
arith = sub;
diff = arith(n1,n2);
printf("Sum is : %d\n",sum);
printf("Diff is : %d\n",diff);




return EXIT_SUCCESS;

}

