#include<stdio.h>
#include<stdlib.h>
void main(){

	void *vptr1 = malloc(3*sizeof(int));
	int *iptr1 = (int *)vptr1;
	
	int x = 10;
	for(int i=0;i<=2;i++){
		*iptr1=x;
		x=x+10;
		iptr1++;
	
	}
	iptr1 = (int *)vptr1;
	for(int i=0;i<=2;i++){
		printf("%d\n",*iptr1);
		iptr1++;
	}

	void *vptr2 = realloc(vptr1,2*sizeof(int));
	int *iptr2 = (int *)vptr2;
	
	printf("%p\n",vptr2);
	printf("%p\n",vptr1);

	iptr2 = iptr2 + 3;
	//iptr2 = iptr1;
	for(int i=0;i<=2;i++){
		*iptr2=x;
		x=x+10;
		iptr2++;
	
	}
	
	iptr2 = (int *)vptr2;
	for(int i=0;i<=4;i++){
		printf("%d\n",*iptr2);
		iptr2++;
	}

	

}
