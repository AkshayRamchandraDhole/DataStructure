#include<stdio.h>
#include<stdlib.h>
int x=10;
int *iptr1=NULL;
//iptr1=(int*)malloc(sizeof(x));
void fun(){
	int y=20;
	int *iptr2=NULL;
	iptr2=(int*)malloc(sizeof(int));
}
void main(){
	int z=30;
	int *iptr3=(int*)malloc(sizeof(int));
	
}
