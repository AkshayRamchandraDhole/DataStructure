#include<stdio.h>
int ternarySearch(int arr[],int start,int end,int ele){
	
	
	if(start > end)
		return -1;

	int mid1 = start + (end - start) / 3;
	int mid2 = end - (end - start) / 3;
	
	if(arr[mid1]==ele)
		return mid1;
	if(arr[mid2]==ele)
		return mid2;
	if(ele < arr[mid1])
		ternarySearch(arr,start,mid1 - 1,ele);
	else if(ele > arr[mid2])
		ternarySearch(arr,mid2 + 1,end,ele);
	else
		ternarySearch(arr,mid1 + 1,mid2 - 1,ele);

}
void main(){
	
	int arr[]={3,6,9,12,15,18,21,24,27,30};
	int len = sizeof(arr)/sizeof(int);
	int ele;
	int start = 0;
	int end = len-1;
	
	printf("Enter Element to search : \n");
	scanf("%d",&ele);

	int ret = ternarySearch(arr,start,end,ele);

	if(ret!=-1)
		printf("Element found at index %d\n",ret);
	else
		printf("Element not found\n");
	
}
