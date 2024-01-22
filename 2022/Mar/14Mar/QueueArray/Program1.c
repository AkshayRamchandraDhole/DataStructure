#include<stdio.h>
#define size 5
int queueArray[size];
int front = -1;
int rear = -1;

int isFull(){
	
	if(rear==size-1)
		return 1;
	return 0;
			
}
int isEmpty(){
	if((front==-1 && rear==-1) || rear<front)
		return 1;
	return 0;
}
void enqueue(int data){
	if(isFull()){
		printf("Queue is Full\n");
	}else{
		if(front == -1)
			front++;
		rear++;
		queueArray[rear]=data;
		printf("Inserted Element : %d\n",data);
	}
} 
void printQueue(){
	
	if(isEmpty()){
		printf("Queue is Empty\n");
		return;
	}
	for(int i=front;i<=rear;i++){
		printf("|%d|",queueArray[i]);
	}
	printf("\n");
}
int dequeue(){
	int del = queueArray[front];
	if(isEmpty()){
		printf("Queue is Empty\n");	
		return -1;
	}
	front++;
	return del;
}
void main(){

	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(50);

	printQueue();
	
	dequeue();
	dequeue();
	
	printQueue();
	
	dequeue();
	dequeue();
	dequeue();
	
	//printQueue();
	
	dequeue();
	
	printQueue();
}
