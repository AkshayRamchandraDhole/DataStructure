#include<stdio.h>
void main(){
	int x=10;
	void *vptr=&x;
	int *iptr=&x;
	printf("%d\n",x);
	printf("%p\n",iptr);
//	printf("%d\n",*vptr);
	printf("%d\n",*iptr);
	printf("%p\n",vptr);
	printf("%d\n",*((int*)vptr));
}
