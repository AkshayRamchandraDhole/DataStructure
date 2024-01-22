#include<stdio.h>
void fun(int **iptr2){
	**iptr2=30;
}
void main(){
	int x=10;
	int *iptr1=&x;
	printf("%d\n",x);
	fun(&iptr1);
	printf("%d\n",x);
}
