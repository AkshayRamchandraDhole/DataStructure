/*
	Write a program which adds a new node in singly linear linked list at first position.
	function prototype:
		int insertFirst(struct node **head,int no);
	input list : 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70
	input element : 21
	output list : 21 -> 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> 80

*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void addFirst(struct Node **head,int ele){

	struct Node *newNode1 = malloc(sizeof(struct Node*));
	newNode1->data=ele;
	
	newNode1->next=*head;

	//struct Node *temp=head;
	*head=newNode1;
	
}
void addLast(){
	int data;
	struct Node *newNode = malloc(sizeof(struct Node*));
	printf("Enter Data:");
	scanf("%d",&data);
	newNode->data=data;
	newNode->next=NULL;

	struct Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
		temp->next=newNode;
}
void printNode(){
	struct Node *temp=head;
	while(temp!=NULL){
		if(temp->next!=NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);	
		temp=temp->next;
	}
	printf("\n");
}
void main(){
	struct Node *newNode = malloc(sizeof(struct Node*));
	newNode->data=10;
	newNode->next=NULL;
	head=newNode;
	for(int i=1;i<=6;i++){
		addLast();
	}
	printNode();
	int ele;
	printf("Enter Element you want to insert:\n");
	scanf("%d",&ele);
	/*struct Node *newNode1 = malloc(sizeof(struct Node*));
	newNode1->data=ele;
	newNode1->next=NULL;*/
	addFirst(&head,ele);
	printNode();
	
}
