#include<stdio.h>
#include "myheader.h"

int sarr[size];
int top = -1;

int isFull(){
		if(top==size-1)
			return 1;
		return 0;
	}

int isEmpty(){
		if(top==-1)
			return 1;
		return 0;
}

void push(int data){
	
	if(isFull()){
		printf("Stack Overflow\n");
		return;
	}
	top++;
	sarr[top]=data;
}
int pop(){
	if(isEmpty()){
		printf("Stack Underflow");
		return -1;
	}
	top--;

	return sarr[top+1];

}
void count(){
	if(isEmpty()){
		printf("Stack is Empty\n");
		return;
	}
	int count=0;
	for(int i=top;i>=0;i--){
		count++;
	}
	printf("Count is : %d\n",count);
	
}
void printStack(){
	for(int i=top;i>=0;i--){
		printf("%d\n",sarr[i]);
	}
}
void main(){
	
	char ch;
	do{
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.printStack\n");
	printf("4.Count\n");
	
	int choice;
	printf("\n Enter Choice : \n");
	scanf("%d",&choice);

	switch(choice){
		
		case 1:
			{
			int data;
			printf("Enter Data : \n");
			scanf("%d",&data);
			push(data);
			}
			break;
		case 2:
			{
			int rm;
			rm=pop();
			if(top>=-1)
				printf("Popped Element : %d\n",rm);
			}
			break;
		case 3:
			printStack();
			break;
		case 4:
			count();
			break;
			
		default:
			printf("\n Wrong Choice \n");
			break;

	}
		printf("Do you to continue \n");
		getchar();
		scanf("%c",&ch);
	
	}while(ch=='y' || ch=='Y');
}





