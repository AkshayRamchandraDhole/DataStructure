#include<stdio.h>
int fun(int x){
	
	if(x <= 0)	
		return 1;

	printf("Hello1\n");
	
	return fun(x-1) + fun(x-2);

}
void main(){
	
	int val = fun(3);
	printf("%d\n",val);
}
