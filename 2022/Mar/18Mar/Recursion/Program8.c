#include<stdio.h>
int reverse(int num){
	int sum=0;
	while(num > 0){
		int rem = num % 10;
		sum = sum*10 + rem;
		num=num/10;
	}
	return sum;
}
int sum=0;
int rev(int num){
		
	if(num>=0){
		if(num==0)
			return sum;
		sum = sum*10 + num % 10;
		rev(num = num/10);	
	}
}
void main(){
	printf("Reverse = %d\n",reverse(123));
	printf("Rev = %d\n",rev(123));
	printf("Re = %d\n",re(123));
}
