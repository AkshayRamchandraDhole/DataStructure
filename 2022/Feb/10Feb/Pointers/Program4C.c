#include<stdio.h>
void gun(int *iptr3){
	printf("%d\n",*iptr3);
}
void run(int **iptr2){
	printf("%d\n",**iptr2);
}
void fun(int *iptr1){
	printf("%d\n",*iptr1);
	run(&iptr1);
	gun(iptr1);
}
void main(){
	int x=10;
	fun(&x);
}
