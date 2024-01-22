#include<stdio.h>
#include<stdlib.h>

struct Node{
	struct Node *prev;
	int data;	
	struct Node *next;
};

struct Node *head=NULL;

void printList(){
	struct Node *temp=head;
	while(temp!=NULL){
		if(temp->next!=NULL)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);
			
		temp=temp->next;
	}
}

void addFirst(){
	
	struct Node *newNode = malloc(sizeof(struct Node));
	
	int data;
	printf("Enter Data:\n");
	scanf("%d",&data);

	newNode->prev=NULL;
	newNode->data=data;
	newNode->next=NULL;

	newNode->next = head;
	head->prev = newNode;
	head=newNode;
	
	
}

void addLast(){
	struct Node *newNode = malloc(sizeof(struct Node));
	
	int data;
	printf("Enter Data:\n");
	scanf("%d",&data);
	
	newNode->prev=NULL;
	newNode->data=data;
	newNode->next=NULL;
	
	struct Node *temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	} 
		
	temp->next=newNode;
	newNode->prev=temp;



}
void addAtPos(int pos){

	struct Node *temp = head;
	struct Node *newNode = malloc(sizeof(struct Node));
	
	int data;
	printf("Enter Data:\n");
	scanf("%d",&data);
	
	newNode->prev=NULL;
	newNode->data=data;
	newNode->next=NULL;
	
	while(pos-2){
		temp=temp->next;
		pos--;
	}

	newNode->next=temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	newNode->next->prev = newNode;

}

void deleteFirst(){
	
	struct Node *temp=head;
		
	head=head->next;
	head->prev=NULL;
	
	free(temp);
	

}

void deleteLast(){
	struct Node *temp = head;
	
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->prev->next = NULL;
	free(temp);
}

void deleteAtPos(int pos){

	struct Node *temp=head;
	while(pos-1){
		temp=temp->next;
		pos--;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
	

}
void main(){
	struct Node *newNode = malloc(sizeof(struct Node));
	head = newNode;
	
	int data;
	printf("Enter Data:\n");
	scanf("%d",&data);

	newNode->prev=NULL;
	newNode->data=data;
	newNode->next=NULL;
	
	printList();
	printf("\n");

	//1.addFirst()
	addFirst();
	printList();
	printf("\n");
	
	//2.addLast()
	addLast();
	printList();
	printf("\n");
	
	//3.addAtPos()
	int pos;
	printf("Enter Pos:\n");
	scanf("%d",&pos);
	addAtPos(pos);
	printList();
	printf("\n");
	
//	4.deleteFirst()
	deleteFirst();
	printList();
	printf("\n");
	
	//5.deleteFirst()
	deleteLast();
	printList();
	printf("\n");
	
	/*6.addAtPos()
	int pos1;
	printf("Enter Pos:\n");
	scanf("%d",&pos1);
	deleteAtPos(pos1);
	printList();
	printf("\n");
	*/

}
