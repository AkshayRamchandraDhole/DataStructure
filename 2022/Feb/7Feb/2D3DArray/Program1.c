#include<stdio.h>
void main(){

	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	printf("Array is : ");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j)
				arr[i][j]=0;
		}
	}
	printf("New Array is : \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
