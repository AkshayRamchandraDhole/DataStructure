#include<stdio.h>
int i=5;
void printNum(){

	if(i<=10){
		printf("%d\n",i);
		i++;
		printNum();
	}
}
void main(){
	printNum();
}
