#include<stdio.h>
int x=10;
int* fun(){
	return &x;
}
void main(){

	int *iptr1=fun();
	printf("%d\n",*iptr1);
}
