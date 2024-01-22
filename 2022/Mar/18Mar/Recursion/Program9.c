#include<stdio.h>
int sumOfDigit(int num){
	int sum=0;
	while(num>0){
		sum+=num%10;
		num=num/10;
	}
	return sum;
}
int sum=0;
int sumDigit(int num){
	if(num!=0){
		sum+=num%10;
		sumDigit(num/10);
	}
	return sum;
}
int add=0;
int digit(int num){
	if(num==0)
		return 0;
	return (num % 10 + digit(num/10));
}
void main(){
	printf("Sum = %d\n",sumOfDigit(123));
	printf("Add = %d\n",sumDigit(123));
	printf("Add = %d\n",digit(123));
}
