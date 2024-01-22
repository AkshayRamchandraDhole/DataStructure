#include<stdio.h>
int interSearch(int arr[],int start,int end,int ele){
	
	if(start > end)
		return -1;
	

	int index = start + (end - start) * ((ele-arr[start])/(arr[end]-arr[start]));

	if(arr[index]==ele)
		return index;

	if(arr[index] < ele)
		interSearch(arr,index + 1,end,ele);
	else
		interSearch(arr,start,index - 1,ele);	

}
void main(){
	
	int arr[]={3,5,9,12,15,18,22,25,29,30};
	int len = sizeof(arr)/sizeof(int);
	int ele;
	int start = 0;
	int end = len - 1;
	
	printf("Enter Element to search : \n");
	scanf("%d",&ele);

	int ret = interSearch(arr,start,end,ele);

	if(ret!=-1)
		printf("Element found at index %d\n",ret);
	else
		printf("Element not found\n");
	
}
