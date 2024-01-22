#include<stdio.h>
int* fun(){
	int x=10;
	return &x;
}
void main(){

	int *iptr1=fun();
	printf("%d\n",*iptr1);
}
