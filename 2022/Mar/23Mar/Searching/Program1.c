#include<stdio.h>
int linearSearch(int arr[],int len,int ele){
	
	for(int i=0;i<len;i++){
		
		if(arr[i]==ele)
			return i;
	} 
	return -1;
	
}
void main(){
	int arr[]={25,13,7,11,21,5,19,17};
	int ele;
	int len = sizeof(arr)/sizeof(int);

	printf("Enter Element for search : \n");
	scanf("%d",&ele);

	int index = linearSearch(arr,len,ele);
	
	if(index != -1)
		printf("Element found at %d\n",index);
	else
		printf("Element not found\n");
}
