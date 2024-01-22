#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Player{
	char pName[20];
	int jerNo;
};
void myInt(){
	void *vptr1 = malloc(3*sizeof(int));
	int *iptr1 = (int *)vptr1;
	int x = 10;
	for(int i=0;i<=2;i++){
		*iptr1=x;
		x=x+10;
		iptr1++;
	}
	printf("INT Data \n");
	iptr1=(int *)vptr1;
	for(int i=0;i<=2;i++){
		printf("%d\n",*iptr1);
		iptr1++;
	}
}
void myFloat(){
	void *vptr1 = malloc(3*sizeof(float));
	float *iptr1 = (float *)vptr1;
	float x = 100.00;
	for(int i=0;i<=2;i++){
		*iptr1=x;
		x=x+10;
		iptr1++;
	}
	printf("FLOAT Data \n");
	iptr1=(float *)vptr1;
	for(int i=0;i<=2;i++){
		printf("%f\n",*iptr1);
		iptr1++;
	}

}
void myChar(){
	
	void *vptr1 = malloc(3*sizeof(char));
	char *iptr1 = (char *)vptr1;
	char x = 'A';
	for(int i=0;i<=2;i++){
		*iptr1=x;
		x=x+1;
		iptr1++;
	}
	printf("CHAR Data \n");
	iptr1=(char *)vptr1;
	for(int i=0;i<=2;i++){
		printf("%c\n",*iptr1);
		iptr1++;
	}

}
void myDouble(){
	
	void *vptr1 = malloc(3*sizeof(double));
	double *iptr1 = (double *)vptr1;
	double x = 1000;
	for(int i=0;i<=2;i++){
		*iptr1=x;
		x=x+10;
		iptr1++;
	}
	printf("DOUBLE Data \n");
	iptr1=(double *)vptr1;
	for(int i=0;i<=2;i++){
		printf("%f\n",*iptr1);
		iptr1++;
	}

}
void myStruct(){

	struct Player *cric=(struct Player *)malloc(sizeof(struct Player));
	strcpy(cric->pName,"Akshay");
	cric->jerNo=10;
	
	printf("Struct Data\n");
	printf("%s\n",cric->pName);
	printf("%d\n",cric->jerNo);

	
}
void main(){
	int choice;
	char ch;

	//printf("Which Memory Allocation do u want to enter ( 1)int / 2)float / 3)char/ 4)double / 5)struct ) \n");
	//scanf("%d",&choice);
	do{
		printf("Which Memory Allocation do u want to enter ( 1)int / 2)float / 3)char/ 4)double / 5)struct ) \n");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:
				myInt();
			break;
			case 2:
				myFloat();
			break;
			case 3 : 
				myChar();
			break;
			case 4 : 
				myDouble();
			break;
			case 5:
				myStruct();
			break;
			default:
				printf("NON of Above");
			break;
		}

		//printf("Do u want to continue (Y/N)");
		//scanf("%c",&ch);

	}while(ch=='Y' || ch=='y');
	
}
