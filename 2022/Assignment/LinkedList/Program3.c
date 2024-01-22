/*Program 3.
		Write a program which adds a new node in singly linear linked list at specified position.
		Function Prototype :
				int InsertAtPosition(struct node **Head, int no, int pos);
		Input linked list : |10|->|20|->|30|->|40|->|50|->|60|->|70|
		Input data element : 21
		Input position : 4
		Output linked list : |10|->|20|->|30|->|21|->|40|->|50|->|60|->|70|

*/
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
int addLast(struct Node **head){
	struct Node *temp=*head;
	int ele;
	printf("Enter Element :");
	scanf("%d",&ele);
	struct Node *newNode=malloc(sizeof(struct Node*));
	newNode->data=ele;
	newNode->next=NULL;
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}
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
int insertAtPos(struct Node **head,int pos,int ele){
		
		struct Node *newNode=malloc(sizeof(struct Node*));
		newNode->data=ele;
		newNode->next=NULL;
		struct Node *temp=*head;
		
		while(pos-2){
			temp=temp->next;
			pos--;
		}
		newNode->next=temp->next;
		temp->next=newNode;
		
}
void main(){
	struct Node *newNode=malloc(sizeof(struct Node*));
	newNode->data=10;
	newNode->next=NULL;
	head=newNode;

	for(int i=1;i<=6;i++){
		addLast(&head);
	}
	printNode(&head);
	int pos,ele;
	printf("Enter Position: ");
	scanf("%d",&pos);	
	printf("Enter Element you want to add: ");
	scanf("%d",&ele);
	insertAtPos(&head,pos,ele);
	printNode(&head);
}
