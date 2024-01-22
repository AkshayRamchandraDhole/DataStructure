#include<stdio.h>
void main(){
	int arr[5];
	printf("Enter Values : \n");
	for(int i=0;i<5;i++){

		scanf("%d",&arr[i]);
	}
	printf("Array is : \n");
	for(int i=0;i<5;i++){

		printf("%d ",arr[i]);
	}
	int ele,flag=0;
	printf("\n Enter element for search: \n");
	scanf("%d",&ele);
	//int count=0;
	int index=0;
	for(int i=0;i<5;i++){
		if(ele==arr[i]){
			//count = count + 1;
			printf("Element present is : %d \n",ele);
			flag=1;
			index=i;
			//break;
		}
	}
	if(flag==0){
		printf("Element Absent\n");
	}
	printf("Last index of Element is : %d \n",index);



}
