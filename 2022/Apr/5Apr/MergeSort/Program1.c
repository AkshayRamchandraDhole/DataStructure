#include<stdio.h>
void merge(int arr[],int start,int mid,int end){
	int x = mid-start+1;
	int y = end-mid;
	
	int nArr1[x],nArr2[y];
	for(int i=0;i<x;i++)
		nArr1[i]=arr[start+i];
	for(int j=0;j<y;j++)
		nArr2[j]=arr[mid+1+j];
	
	int i=0,j=0,t=start;
	while(i<x && j<y){
		if(nArr1[i]<nArr2[j]){
			arr[t]=nArr1[i];
			i++;
		}else{
			arr[t]=nArr2[j];
			j++;
		}
		t++;
	}
	while(i<x){
		arr[t]=nArr1[i];		
		i++;
		t++;
	}
	while(j<y){
		arr[t]=nArr2[j];		
		j++;
		t++;
	}
	
		

}
void mergeSort(int arr[],int start,int end){
	
	if(start < end){
	
		int mid=(start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
void main(){
	int arr[]={7,25,18,11,5,2,13,1};
	int len = sizeof(arr)/sizeof(int);
	int start=0;
	int end=len-1;	

	printf("Array before sorting : \n");
	for(int i=0;i<len;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	mergeSort(arr,start,end);
	
	printf("Array before sorting : \n");
	for(int i=0;i<len;i++)
		printf("%d ",arr[i]);
	printf("\n");

	
}
