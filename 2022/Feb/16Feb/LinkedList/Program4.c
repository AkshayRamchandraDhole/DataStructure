#include<stdio.h>
#include<stdlib.h>
struct Info{
	int age;
	float height;
	struct Info *next;
};
void main(){
	//printf("%ld\n",sizeof(struct Node));
	struct Info *ptr1 = (struct Info *)malloc(sizeof(struct Info));
	ptr1->age=18;
	ptr1->height=5.7;
	ptr1->next=NULL;
	
	//printf("%c\n",ptr1->ch);
	//printf("%p\n",ptr1->next);

	struct Info *ptr2 =(struct Info *)malloc(sizeof(struct Info));
	ptr2->age=19;
	ptr2->height=6.7;
	ptr2->next=NULL;

	ptr1->next=ptr2;
 
//	printf("%c\n",ptr1->ch);
//	printf("%p\n",ptr1->next->next);

	ptr2 = (struct Info *)malloc(sizeof(struct Info));
	ptr2->age=20;
	ptr2->height=7.7;
	ptr2->next=NULL;

	ptr1->next->next=ptr2;
	//ptr2=NULL;
	
	ptr2=(struct Info *)malloc(sizeof(struct Info));
	ptr2->age=21;
	ptr2->height=8.7;
	ptr2->next=NULL;
	
	ptr1->next->next->next=ptr2;

	while(ptr1 !=NULL){
		printf("|%d|",ptr1->age);
		printf("%f|",ptr1->height);
		printf("%p|\n",ptr1->next);	
		ptr1=ptr1->next;
	}

}
