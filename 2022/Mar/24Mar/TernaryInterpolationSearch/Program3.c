#include<stdio.h>
int interSearch(int arr[],int len,int ele){
	
	int start = 0;
	int end = len - 1;
	while(start < end){

		int index = start + (end - start) * ((ele-arr[start])/(arr[end]-arr[start]));

		if(arr[index]==ele)
			return index;

		if(arr[index] < ele)
			start = index + 1;
		else
			end = index - 1;
	}
	return -1;

}
void main(){
	
	int arr[]={3,6,9,12,15,18,21,24,27,30};
	int len = sizeof(arr)/sizeof(int);
	int ele;
	
	printf("Enter Element to search : \n");
	scanf("%d",&ele);

	int ret = interSearch(arr,len,ele);

	if(ret!=-1)
		printf("Element found at index %d\n",ret);
	else
		printf("Element not found\n");
	
}
