#include<stdio.h>
#include<stdlib.h>
//#pragma pack(1)
struct Node{
	char ch;
//	int x;
	struct Node *next;
};
void main(){
	printf("%ld\n",sizeof(struct Node));
}
