#include<stdio.h>
void* malloc(size_t);
void main(){

	void *vptr = malloc(sizeof(int));
	int *iptr = (int *)vptr;
	*iptr=10;
	printf("%d\n",*iptr);
	//printf("%d\n",*vptr);

}
