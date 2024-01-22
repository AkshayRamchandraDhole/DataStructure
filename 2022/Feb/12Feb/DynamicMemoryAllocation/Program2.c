#include<stdio.h>
void main(){

	int arr[4] = {10,20,30,40};
	int *iptr = arr;
	printf("%d\n",*iptr); // 10;
	iptr++;
	printf("%d\n",*iptr); // 20;
	iptr++;
	printf("%d\n",*iptr); // 30;
	iptr+3;
	printf("%d\n",*iptr); // 30;
	
	
}
