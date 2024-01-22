#include<stdio.h>
#include<stdlib.h>
void main(){

	void *vptr = malloc(3*sizeof(int));
	int *iptr = (int *)vptr;
	*iptr=20;
	printf("%d\n",*iptr);
	printf("%p\n",iptr);
	free(iptr);
	iptr=NULL;
	/*printf("%d\n",*iptr);
	printf("%p\n",iptr);
	iptr++;
	printf("%d\n",*iptr);
	printf("%p\n",iptr);*/
	
	
	printf("%ld\n",sizeof(NULL));
	printf("%p\n",&iptr);
		
}

