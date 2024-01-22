#include<stdio.h>
int add=0;
int i=0;
/*void sum(){
	if(i<=10){
		add+=i;
		i++;
		if(i==10)
			printf("Sum = %d\n",add);
		sum();
	}
}*/
int sum(){
	if(i<=10){
		add+=i;
		i++;
		if(i==10){
			printf("Sum = %d\n",add);
			return add;
		}
		sum();
	}
}	
void main(){
	int ad = sum();
	printf("Add = %d\n",ad);
}
