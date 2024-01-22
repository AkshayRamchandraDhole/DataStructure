#include<stdio.h>
#include<stdlib.h>
void main(){

	void *vptr1 = malloc(3*sizeof(int));
	int *iptr1 = (int *)vptr1;
	printf("%p\n",vptr1);
	void *vptr2 = realloc(vptr1,3*sizeof(int));
	printf("%p\n",vptr2);
}
