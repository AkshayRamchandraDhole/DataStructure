#include<stdio.h>
int ternarySearch(int arr[],int len,int ele){
	
	int start = 0;
	int end = len - 1;
	while(start < end){

		int mid1 = start + (end - start) / 3;
		int mid2 = end - (end - start) / 3;
	
		if(arr[mid1]==ele)
			return mid1;
		if(arr[mid2]==ele)
			return mid2;
		if(ele < arr[mid1])
			end = mid1 - 1;
		else if(ele > arr[mid2])
			start = mid2 + 1;
		else{
			start = mid1 + 1;	
			end = mid2 - 1;
		}

		if(start == end && arr[start]==ele)
				return start;						
		
	}
	return -1;

}
void main(){
	
	int arr[]={3,6,9,12,15,18,21,24,27,30};
	int len = sizeof(arr)/sizeof(int);
	int ele;
	
	printf("Enter Element to search : \n");
	scanf("%d",&ele);

	int ret = ternarySearch(arr,len,ele);

	if(ret!=-1)
		printf("Element found at index %d\n",ret);
	else
		printf("Element not found\n");
	
}
