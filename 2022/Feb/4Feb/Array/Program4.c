#include<stdio.h>
void main(){
	int arr[40],size=0;
	printf("Enter Size of array : \n");
	scanf("%d",&size);
	printf("Enter Values : \n");
	for(int i=0;i<size;i++){

		scanf("%d",&arr[i]);
	}
	printf("Array is : \n");
	for(int i=0;i<size;i++){

		printf("%d ",arr[i]);
	}
	int ele,pos,flag=0;
	printf("\n Enter element for search: \n");
	scanf("%d",&ele);
	printf("\n Enter index where you want to put element : \n");
	scanf("%d",&pos);
	//int count=0;
	//int index=0;
	for(int i=0;i<6;i++){
		if(ele==arr[i]){
			//count = count + 1;
			
			printf("Element present is : %d  no need to add \n",ele);
			flag=1;
			//index=i;
			break;
		}
	}
	if(flag==0){
			//arr[0]=ele;
			//int tmp = arr[0];
			//arr[0]=ele;
			for(int i=size-1;i>=pos-1;i--){
				arr[i+1]=arr[i];
				//printf("Element is : %d ",arr[i]);
		}
	
	arr[0]=ele;
	for(int i=0;i<=size;i++){
		printf("Element is : %d \n",arr[i]);
	}
}
	printf("\n");
//	printf("Last index of Element is : %d \n",index);



}
