#include<stdio.h>
#include<stdlib.h>
void main(){
	
	void *vptr = malloc(3 * sizeof(int)); 
	int *iptr = (int *)vptr;

	int x = 10;
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
	

}
