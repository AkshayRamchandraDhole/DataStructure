#include<stdio.h>
int xyz(int x){
	if(x==20)
		return x;
	int a=10;
	a=a+x;
	x=x-10;
	//printf("%d\n",a);
	//return a;
	xyz(x);
	return x;
}
void main(){
	printf("%d\n",xyz(50));
}
