#include<stdio.h>
#include<stdlib.h>
void main(){
	
	void *vptr = malloc(3*sizeof(int));
	int *iptr = (int *)vptr;
	int x = 10;
	printf("malloc() opertion\n");
	for(int i=0;i<=2;i++){
		*iptr=x;
		x=x+10;
		iptr++;
	}
	iptr=(int*)vptr;
	for(int i=0;i<=2;i++){
		printf("%d\n",*iptr);
		iptr++;
	}

	void *vptr2 = calloc(3,sizeof(int));
	int *iptr2 = (int *)vptr2;
	
	//iptr2=iptr;
	printf("calloc opertaion\n");
	for(int i=0;i<=2;i++){
		*iptr2=x;
		x=x+10;
		iptr2++;
	}
	iptr2=(int*)vptr2;
	for(int i=0;i<=2;i++){
		printf("%d\n",*iptr2);
		iptr2++;
	}




	
	void *vptr1 = realloc(vptr,3*sizeof(int));
	int *iptr1=(int*)vptr1;

	iptr1=iptr;	
	printf("realloc() opertion\n");

	for(int i=0;i<=2;i++){
		*iptr1=x;
		x=x+10;
		iptr1++;
	}
	iptr1=(int*)vptr1;
	for(int i=0;i<=5;i++){
		printf("%d\n",*iptr1);
		iptr1++;
	}
	printf("free() opertion\n");
	iptr=NULL;
	free(iptr);
	printf("iptr free()\n");
	iptr1=NULL;
	free(iptr1);
	printf("iptr1 free()\n");
	iptr2=NULL;
	free(iptr2);
	printf("iptr2 free()\n");
	//iptr1=NULL;
	
}
