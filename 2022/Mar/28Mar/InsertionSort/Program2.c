#include<stdio.h>
void insertionSort(int arr[],int len){
	static int j=1;
	if(j==len)
		return;

	
	int temp = arr[j];
	int i;
	for(i=j-1; i>=0 && temp<arr[i] ;i--){
		arr[i+1]=arr[i];;
	}
	arr[i+1]=temp;
	j++;
	insertionSort(arr,len);
	
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
