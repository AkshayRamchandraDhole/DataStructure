/*
	Program 4:
		Write a program which removes the first node from a singly linear linked list.
		Function Prototype :
			int DeleteFirst(struct node **Head);
		Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
		Output linked list : |20|->|30|->|40|->|50|->|60|->|70|
*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
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
int addLast(struct Node **head,int ele){
	
	struct Node *newNode = malloc(sizeof(struct Node*));
	newNode->data=ele;
	newNode->next=NULL;
	
	

	struct Node *temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}

int deleteFirst(struct Node **head){
	struct Node *temp=*head;
	*head=temp->next;
	//free(temp);
	printf("%d\n",temp->data);
	free(temp);
}
void main(){
	struct Node *newNode=malloc(sizeof(struct Node*));
	newNode->data=10;
	newNode->next=NULL;
	head=newNode;
	int ele;
	for(int i=1;i<=6;i++){
		printf("Enter Element: ");
		scanf("%d",&ele);
		addLast(&head,ele);
	}
	printNode(&head);
	deleteFirst(&head);
	printNode(&head);
	deleteFirst(&head);
	printNode(&head);
}

