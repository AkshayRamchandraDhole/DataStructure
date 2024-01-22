#include<stdio.h>
int fibo(int x){
	
	if(x <= 0)	
		return 1;
	
	return fibo(x-1) + fibo(x-2);

}
void main(){
	
	int val = fibo(3);
	printf("%d\n",val);
}
