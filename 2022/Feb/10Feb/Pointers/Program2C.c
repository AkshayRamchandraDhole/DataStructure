#include<stdio.h>
void fun(int x){
	printf("%d\n",x);
}
void main(){
//	fun();
	fun(10);
	fun('A');
	fun(10.5);
}
