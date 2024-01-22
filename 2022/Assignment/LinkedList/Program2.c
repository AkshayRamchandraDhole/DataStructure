/*
	Program 2.
		Write a program which adds a new node in a singly linear linked
		list at last position.
		Function Prototype :
				int InsertLast(struct node **Head, int no);

		Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
		Input data element : 21
		Output linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|->|21|
*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int addFirst(struct Node **head,int ele){
	struct Node *newNode = malloc(sizeof(struct Node*));
	newNode->data=ele;
	newNode->next=*head;
	*head=newNode;
	//return &head;
}
void printNode(struct Node **head){
	struct Node *temp=malloc(sizeof(struct Node*));
	temp=*head;
	while(temp!=NULL){
		if(temp->next!=NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int insertLast(struct Node **head,int ele){
	struct Node *newNode = malloc(sizeof(struct Node*));
	newNode->data=ele;
	newNode->next=NULL;
	struct Node *temp=malloc(sizeof(struct Node*));
	temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	
}
void main(){
	struct Node *head=NULL;
	struct Node *newNode = malloc(sizeof(struct Node*));
	newNode->data=70;
	newNode->next=NULL;
	head=newNode;
	int ele;
	for(int i=1;i<=6;i++){
		printf("Enter Element:");
		scanf("%d",&ele);
		addFirst(&head,ele);
	}
	printNode(&head);
	int num;
	printf("Enter Element you want to add : ");
	scanf("%d",&num);
	insertLast(&head,num);
	printNode(&head);
}
