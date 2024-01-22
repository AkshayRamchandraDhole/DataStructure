#include<stdio.h>
void reArray(int arr[],int n){
	int i=0;
	while(i<n/2){
		int temp = arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
		i++;
	}
}
void main(){
	int arr[5]={10,20,30,40,50};
	printf("Before Operation : \n");
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	reArray(arr,5);
	
	printf("After Operation : \n");
	for(int i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
}
