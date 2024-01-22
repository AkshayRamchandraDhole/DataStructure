#include<stdio.h>
void insertionSort(int arr[],int len){
	for(int j=1;j<len;j++){
		int temp = arr[j];
		int i;
		for(i=j-1; i>=0 && temp<arr[i] ;i--){
			arr[i+1]=arr[i];;
		}
		arr[i+1]=temp;
	}
}
void main(){
	
	int arr[]={4,11,7,5,2,9,3};
	int len = sizeof(arr)/sizeof(int);
	printf("Array before sorting : \n");
	for(int i=0;i<len;i++)
		printf("%d ",arr[i]);
	insertionSort(arr,len);
	printf("\n Array after sorting : \n");
	for(int i=0;i<len;i++)
		printf("%d ",arr[i]);
}
