#include<stdio.h>
//#include<stdlib.h>
void* malloc(size_t);
struct Player{
	char pName[20];
	int jerNo;
	char cName[20];
	float sal;
	
};
void passCric(struct Player *cric){
	printf("%s\n",cric->pName);
	printf("%d\n",cric->jerNo);
	printf("%s\n",cric->cName);
	printf("%f\n",cric->sal);
}
void passFb(struct Player *fb){
	
	printf("%s\n",fb->pName);
	printf("%d\n",fb->jerNo);
	printf("%s\n",fb->cName);
	printf("%f\n",fb->sal);

}
void mystrcpy(char *pName,char *str){
	while(*str!='\0'){
		*pName=*str;
		pName++;
		str++;
	}
}
void main(){
	
	struct Player *cptr = (struct Player *)malloc(sizeof(struct Player));
	mystrcpy(cptr->pName,"Virat Kohli");
	cptr->jerNo=18;
	mystrcpy(cptr->cName,"India");
	cptr->sal=250.00;

	passCric(cptr); 
	
	
	
	struct Player *fptr = (struct Player *)malloc(sizeof(struct Player));
	mystrcpy(fptr->pName,"Messi");
	fptr->jerNo=10;
	mystrcpy(fptr->cName,"Argentina");
	fptr->sal=650.00;
	
	passCric(fptr);
}

