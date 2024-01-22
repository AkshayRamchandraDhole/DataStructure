#include<stdio.h>
void fun(int *iptr){
	printf("%p\n",iptr);
	printf("%d\n",*iptr);
}
void main(){
	int x=10;
	printf("%p\n",&x);
	fun(&x);
}
