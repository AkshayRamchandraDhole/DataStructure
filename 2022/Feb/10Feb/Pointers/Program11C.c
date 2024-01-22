#include<stdio.h>
#include<stdlib.h>
int* fun(){
	int x=10;
	int *iptr1=(int *)malloc(sizeof(x));
	return iptr1;
}
void main(){

	int *iptr1=fun();
	printf("%d\n",*iptr1);
}
