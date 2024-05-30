#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compareAverageMarks(const void *,const void *);

typedef struct Student {
	char student_id[1024];
	double marks;
}Student;



int main(){
	double markHash[2000];
	double countHash[2000];
	memset(markHash,0,2000);
	memset(countHash,0,2000);
	int n;
	printf("Enter size of students\n");
	scanf("%d",&n);
	Student s[n];
	printf("Enter student details\n");
	for(int i=0;i<n;i++){
	char temp[20];
	scanf("%s",temp);
	char* t = strtok(temp,"-");
	strcpy(s[i].student_id,t);
	t = strtok(NULL,"-");
	s[i].marks = atoi(t);
	}

	printf("Printing all students\n");
	for(int i=0;i<n;i++){
	printf("%s - %.2lf\n",s[i].student_id,s[i].marks);
	}

	for(int i=0;i<n;i++){
	int digit;
	sscanf(s[i].student_id,"S%d",&digit);
	markHash[digit] += s[i].marks;
	countHash[digit]++;
	}

	for(int i=1001;i<2000;i++){
	if(markHash[i] != 0){
		double temp  = markHash[i] / countHash[i];
		markHash[i] = temp;
	}
	}

	int count = 0;
    Student sol[n];

    for(int i=1001;i<2000;i++){
    	if(markHash[i] != 0){
		char temp[20];
	sprintf(temp,"S%d",i);
	strcpy(sol[count].student_id,temp);
	sol[count].marks = markHash[i];
	count++;
	}
    }

    qsort(sol,count,sizeof(Student),compareAverageMarks);
printf("\n\n");
printf("Final stduents with avg marks\n");
    for(int i=0;i<count;i++){
        printf("%s - %.2lf\n",sol[i].student_id,sol[i].marks);
    }

return EXIT_SUCCESS;
}

int compareAverageMarks(const void *a, const void *b) {
	const Student *student1 = (const Student *)a;
	const Student *student2 = (const Student *)b;

	if(student1 -> marks > student2 -> marks){
	return -1;
	}else if(student1 -> marks < student2 -> marks){
	return 1;
	}else{
		return 0;
	}
}





