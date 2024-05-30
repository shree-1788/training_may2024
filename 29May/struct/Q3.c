
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compareQuantity(const void *,const void *);

typedef struct Product {
	char productid[20];
	int quantity;
}Product;



int main(){
	int quanHash[10000];
	memset(quanHash,0,10000);
	int n;
	printf("Enter size of products\n");
	scanf("%d",&n);
	Product p[n];
	printf("Enter Product details\n");
	for(int i=0;i<n;i++){
	char temp[20];
	scanf("%s",temp);
	char* t = strtok(temp,"-");
	strcpy(p[i].productid,t);
	t = strtok(NULL,"-");
	p[i].quantity = atoi(t);
	}

	printf("Printing all products\n");
	for(int i=0;i<n;i++){
	printf("%s - %d\n",p[i].productid,p[i].quantity);
	}

	for(int i=0;i<n;i++){
	int digit;
	sscanf(p[i].productid,"P%d",&digit);
	quanHash[digit] += p[i].quantity;
	}

	int count = 0;
    Product sol[n];

    for(int i=1001;i<2000;i++){
    	if(quanHash[i] != 0){
		char temp[10];
	sprintf(temp,"P%d",i);
	strcpy(sol[count].productid,temp);
	sol[count].quantity = quanHash[i];
	count++;
	}
    }
    qsort(sol,count,sizeof(Product),compareQuantity);
printf("\n\n");
printf("Final products with final quantity\n");
    for(int i=0;i<count;i++){
        printf("%s - %d\n",sol[i].productid,sol[i].quantity);
    }

return EXIT_SUCCESS;
}


int compareQuantity(const void *a,const void *b){
const Product *p1 = (const Product *)a;
const Product *p2 = (const Product *)b;

if(p1 -> quantity > p2 -> quantity){
return -1;
}else if(p1 -> quantity < p2 -> quantity){
return 1;
}else{
return 0;
}


}




