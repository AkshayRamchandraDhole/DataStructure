#include<stdio.h>
void fun(int *x,int *y){
	*x=*x+1;
	*y=*y-1;
	printf("%d %d\n",*x,*y);
}
void main(){
	int x=10;
	int y=20;
	fun(&x,&y);
	printf("%d %d\n",x,y);
}
