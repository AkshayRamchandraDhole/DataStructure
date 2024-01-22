#include<stdio.h>
#define size 5
int queueArray[size];
int front = -1;
int rear = -1;

int isFull(){
	
	if(front==((rear+1)%size))
		return 1;
	return 0;
			
}
int isEmpty(){
	if(front==-1)
		return 1;
	return 0;
}
void enqueue(int data){
	if(isFull()){
		printf("Queue is Full\n");
	}else{
		if(front == -1)
			front++;
		rear=( (rear+1) % size);
		queueArray[rear]=data;
		printf("Inserted Element : %d\n",data);
	}
} 
void printQueue(){
	
	if(isEmpty()){
		printf("Queue is Empty\n");
		return;
	}
	int i;
	for(i=front ; i!=rear ; (i=(i+1)%size)){
		printf("|%d|",queueArray[i]);
	}
	
	printf("|%d|\n",queueArray[i]);
}
int dequeue(){
	int del = queueArray[front];
	if(isEmpty()){
		printf("Queue is Empty\n");	
		return -1;
	}else{
		if(front==rear){
			front=-1;	
			rear=-1;
		}
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
	
	printQueue();
	
	enqueue(60);
	
	printQueue();
		

}
