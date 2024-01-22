#include<stdio.h>
void printArray(int arr[],int len){
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void swap(int *iptr1,int *iptr2){
	int temp=*iptr1;
	    *iptr1=*iptr2;
	    *iptr2=temp;
}
void bubbleSort(int arr[],int len){
	for(int i=0;i<len;i++){
		for(int j=0;j<len-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

void selectionSort(int arr[],int len){
	
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(arr[j]<arr[i]){
				swap(&arr[j],&arr[i]);
			}
		}
	}
}
void insertionSort(int arr[],int len){
	
	for(int i=1;i<len;i++){
		int temp=arr[i];
		int j;
		for(j=i-1;j>=0 && temp<arr[j];j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
}

void merge(int arr[],int start,int mid,int end){
	
	int x=mid-start+1;
	int y=end-mid;

	int arr1[x];
	int arr2[y];

	for(int i=0;i<x;i++)
		arr1[i]=arr[start+i];
	for(int j=0;j<y;j++)
		arr2[j]=arr[mid+j+1];

	int i=0,j=0,t=start;

	while(i<x && j<y){
		if(arr1[i]<arr2[j]){
			arr[t]=arr1[i];
			i++;	
		}else{
			arr[t]=arr2[j];
			j++;
		}
		t++;
	}
	while(i<x){
		arr[t]=arr1[i];
		i++;
		t++;
	}
	while(j<y){
		arr[t]=arr2[j];
		j++;
		t++;
	}

}
void mergeSort(int arr[],int start,int end){

	if(start<end){
		int mid=(start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
void main(){
	int arr[]={8,5,7,11,18,9,6,4};
	int len=sizeof(arr)/sizeof(int);
	int start=0;
	int end=len-1;	
	printf("\n Sorting \n");
	printf("1.Bubble Sort\n");
	printf("2.Selection Sort\n");
	printf("3.Insertion Sort\n");
	printf("4.Merge Sort\n");

	int ch;
 
	printf("Enter your chioce:");
	scanf("%d",&ch);

	switch(ch){
		case 1:
			printArray(arr,len);
			bubbleSort(arr,len);
			printArray(arr,len);
		break;
		case 2:
			printArray(arr,len);
			selectionSort(arr,len);
			printArray(arr,len);
		break;
		case 3:
			printArray(arr,len);
			insertionSort(arr,len);
			printArray(arr,len);
		break;
		case 4:
			printArray(arr,len);
			mergeSort(arr,start,end);
			printArray(arr,len);
		break;
		default:
			printf("Wrong Choice\n");
		break;
	}
}
