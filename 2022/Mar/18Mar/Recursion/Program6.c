#include<stdio.h>
int fact(int x){
	static int out=1;
	if(x>=1){
		out=out*x;
		x--;
		fact(x);
	}else{
		return out;
	}
}
int ft(int x){
	if(x==1)
		return 1;
	return x * ft(x-1);
}
void main(){
	int n=4;
	int factorial=fact(n);
	printf("Factorial = %d\n",factorial);
	
	n=9;
	factorial=ft(n);
	printf("Factorial = %d\n",factorial);
}
