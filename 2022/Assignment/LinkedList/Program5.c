/*

	Program 5:
			Write a program which removes the last node from a singly linear linked list.
			Function Prototype :
						int DeleteLast(struct node **Head);
			Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
			Output linked list : |10|->|20|->|30|->|40|->|50|->|60|
*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct node *next;
};

struct Node *head=NULL;

void printNode(struct Node **head){
	struct Node *temp=*head;
	while(temp!=NULL){
		if(temp->next!=NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void addLast(struct Node **head,int ele){
	struct Node *newNode=malloc(sizeof(struct Node*));
	newNode->data=ele;
	newNode->next=NULL;
	
	struct Node *temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}

void removeLast(struct Node **head){
	struct Node *temp=*head;
	while(temp->next->next!=NULL)
		temp=temp->next;
	printf("%d ",temp->data);
	temp->next=NULL;
	free(temp);
	//printf("%d ",temp->data);
	//temp->next=NULL;

}
void main(){
	struct Node *newNode=malloc(sizeof(struct Node*));
	newNode->data=10;
	newNode->next=NULL;
	head=newNode;
	//printNode(&head);
	int ele;
	for(int i=0;i<6;i++){
		printf("Enter Element:");	
		scanf("%d",&ele);
		addLast(&head,ele);
	}
	printNode(&head);
	removeLast(&head);
	printNode(&head);
}
