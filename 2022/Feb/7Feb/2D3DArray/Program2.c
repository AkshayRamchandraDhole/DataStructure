#include<stdio.h>
void main(){
	int arr[2][3][3]={{1,2,3,4,5,6,7,8,9},
			{10,20,30,40,50,60,70,80,90}};
	for(int plane=0;plane<2;plane++){
		for(int row=0;row<3;row++){
			for(int col=0;col<3;col++){
				printf("%d ",arr[plane][row][col]);
			}
			printf("\n");
		}
	}

}
