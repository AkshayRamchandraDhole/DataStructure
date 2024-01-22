#include<stdio.h>
void main(){
	int arr[2][3][3]={{10,2,3,4,50,6,70,8,9},
			{10,20,30,40,50,60,70,80,90}};
	printf("Array is : \n");
	for(int plane=0;plane<2;plane++){
		for(int row=0;row<3;row++){
			for(int col=0;col<3;col++){
					
					printf("%d ",arr[plane][row][col]);
			}
			printf("\n");
		}
	}
	for(int plane=0;plane<2;plane++){
		for(int row=0;row<3;row++){
			for(int col=0;col<3;col++){
					if(arr[plane][row][col]==arr[plane+1][row][col]){
						arr[plane][row][col] = arr[plane][row][col] + 1;
						arr[plane+1][row][col] = arr[plane+1][row][col] + 1;
					}
			}
		}
	}
	printf("New Array is : \n");
	for(int plane=0;plane<2;plane++){
		for(int row=0;row<3;row++){
			for(int col=0;col<3;col++){
					
					printf("%d ",arr[plane][row][col]);
			}
			printf("\n");
		}
	}
	


}
