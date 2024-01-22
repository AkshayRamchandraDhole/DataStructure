#include<stdio.h>
void bubbleSort(int arr[],int len){
	int flag=0;
	if(len==1)
		return;
	for(int j=0;j<len-1;j++){
		if(arr[j] > arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			flag=1;
			}
		}
		if(flag==0)
			return;
	bubbleSort(arr,len-1);
	
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
	
	bubbleSort(arr,len);
	
	printf("Array after sort : \n");
	
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
