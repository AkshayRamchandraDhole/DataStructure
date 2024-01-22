#include<stdio.h>
/*void*/ int fun(int x,int y){
	int add;
	add=x+y;
	return add;
}
void main(){
	fun(10,20);
	int x=fun(10,20);
	printf("%d\n",x);
}
