#include<stdio.h>
int fun(int x){
	
	if(x <= 0)	
		return 100;
	fun(x-1);
	printf("Hello1\n");
	fun(x-2);
	printf("Hello2\n");

}
void main(){
	fun(3);
}
