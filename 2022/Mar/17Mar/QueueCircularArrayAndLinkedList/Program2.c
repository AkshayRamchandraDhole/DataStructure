#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;

void enqueue(int data){
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	
	struct Node *temp=front;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}
void dequeue(){
	if(front==NULL){
		printf("Queue is Empty\n");
		return;
	}
	struct Node *temp=front;
	front=front->next;
	temp->next=NULL;
	printf("Deleted Ele : %d\n",temp->data);
	free(temp);
	
}
void printQueue(){
	struct Node *temp=front;
	if(front==NULL){
		printf("Queue is Empty\n");
		return;
	}
	while(temp!=NULL){
		if(temp->next==NULL)
			printf("|%d|",temp->data);
		else
			printf("|%d|->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void main(){
	
	dequeue();
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data=10;
	newNode->next=NULL;
	
	front=newNode;
	rear=newNode;
	
	dequeue();

	enqueue(10);
	enqueue(20);
	enqueue(30);
	printQueue();
	dequeue();
	dequeue();
	printQueue();

}
