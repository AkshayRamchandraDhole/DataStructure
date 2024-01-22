#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Book{
	char bName[40];
	char aName[40];
	int pages;
	float price;	
};
void main(){
void *vptr = malloc(sizeof(struct Book));
struct Book *bptr = (struct Book*)vptr;
strcpy(bptr->bName,"2States");
strcpy(bptr->aName,"Chetan Bhagat");
bptr->pages=350;
bptr->price=450.50;
printf("%s\n",bptr->bName);
printf("%s\n",bptr->aName);
printf("%d\n",bptr->pages);
printf("%f\n",bptr->price);

}
