#include<stdio.h>
void main(){
	int x=10;
	int *iptr=&x;
	printf("%d\n",*iptr);
	printf("%ld\n",iptr);
	printf("%p\n",*iptr);
	
}
