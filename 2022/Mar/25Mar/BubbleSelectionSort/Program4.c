#include<stdio.h>
void selectionSort(int arr[],int len){
	static int i=0;
	if(i==len)
		return;
		
	for(int j=i+1;j<len;j++){
		if(arr[i] > arr[j]){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
	}
	i++;
	selectionSort(arr,len);
}
void main(){
	int arr[] = {7,24,3,5,19,18,9};
	//int arr[] = {3,5,7,9,18,19,24};
	int len = sizeof(arr)/sizeof(int);
	printf("Array before sort : \n");
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	
	selectionSort(arr,len);
	
	printf("Array after sort : \n");
	
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
