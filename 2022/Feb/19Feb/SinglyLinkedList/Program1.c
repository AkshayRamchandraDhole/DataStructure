#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;

void printNode(){
	struct Node *temp = head;
	while(temp!=NULL){
		
		if(temp->next !=NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);
		temp = temp->next;
	}
}

void addAtBeg(){
	
	struct Node *temp = head;
	
	struct Node *node = malloc(sizeof(struct Node));
	
	node->data = 20;
	node->next = NULL;

	node->next = head;
	head=node;
}

void addAtEnd(){
	struct Node *temp = head;	
	
	struct Node *node = malloc(sizeof(struct Node));
	
	node->data = 30;
	node->next = NULL;
	
	while(temp->next !=NULL){

		temp = temp->next;
	}
	temp->next=node;
}

void count(){

	struct Node *temp = head;
	
	int count = 0;
		
	while(temp != NULL){
		count++;
		temp=temp->next;
	}
	
	printf("Count = %d\n",count);
}
void main(){
	struct Node *node1 = malloc(sizeof(struct Node));
	
	head=node1;
	
	node1->data = 10;
	node1->next = NULL;
	
	// 1. printNode()
	printNode();
	printf("\n");
	
	// 2. addAtBeg()
	addAtBeg();
	printNode();
	printf("\n");
	
	// 3. addAtEnd()
	addAtEnd();
	printNode();
	printf("\n");
	
	// 4. count()
	count();
	printNode();
	printf("\n");
	
		
}
