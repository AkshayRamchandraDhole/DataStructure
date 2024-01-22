#include<stdio.h>
int add=0;
int sum(int *arr){
	for(int i=0;i<5;i++){
	if(arr[i] % 5 == 0)
		add+=arr[i];
	}
	//printf("In Sum\n");
	return add;
}
int i=0;
int add1=0;
int reAdd(int *arr){
	
	if(i<5){
		if(arr[i] % 5 == 0)
			add1+=arr[i];
		//printf("%d\n",add1);
		i++;
		reAdd(arr);
	}
	return add1;
}
void main(){
	int arr[5]={1,20,43,40,66};
	printf("Sum = %d\n",sum(arr));
	printf("Sum = %d\n",reAdd(arr));
}
