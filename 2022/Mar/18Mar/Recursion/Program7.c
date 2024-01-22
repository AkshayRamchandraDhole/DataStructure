#include<stdio.h>
int sum(int x){
	if(x==1)
		return 1;
	
	return x + sum(x-1);
}
void main(){
	printf("Sum = %d\n",sum(5));
}
