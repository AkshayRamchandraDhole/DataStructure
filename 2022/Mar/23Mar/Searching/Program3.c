#include<stdio.h>
int binarySearch(int arr[],int len,int ele){
	
	int start=0;
	int end=len-1;
	while(start<=end){
		
		int mid = (start + end) / 2;
		
		if(arr[mid]==ele)
			return mid;

		if(arr[mid] < ele)
			start = mid + 1;
		else
			end = mid - 1;				
	}
	return -1;
	
}
void main(){
	int arr[]={3,27,31,125,225,350,729,830,990,1120};
	int ele;
	int len = sizeof(arr)/sizeof(int);

	printf("Enter Element for search : \n");
	scanf("%d",&ele);

	int index = binarySearch(arr,len,ele);
	
	if(index!=-1)
		printf("Element found at %d\n",index);
	else
		printf("Element not found\n");
}
