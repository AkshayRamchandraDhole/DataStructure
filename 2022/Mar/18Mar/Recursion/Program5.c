#include<stdio.h>
int fact(int n){
	int ft=1;
	for(int i=1;i<=n;i++)
		ft*=i;
	return ft;
}	
void main(){
	int n=4;
	int factorial = fact(n);
	printf("Factorial : %d\n",factorial);
}
