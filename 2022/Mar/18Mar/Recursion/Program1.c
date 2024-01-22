#include<stdio.h>
int count=0;
void fun(){
	if(count<10){
		printf("Fun : %d\n",count);
		count++;
		fun();
	}
}
void main(){
	fun();
}
