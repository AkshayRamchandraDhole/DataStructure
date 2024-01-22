#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;

void push(int data){
	struct Node *newNode = malloc(sizeof(struct Node));
	if(newNode == NULL){
		printf("Memory Full\n");
		exit(1);
	}
	newNode->data=data;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
	}else{
		newNode->next=head;
		head=newNode;
	}
	
}
void printStack(){
	struct Node *temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int pop(){
	struct Node *temp=head;
	if(head==NULL){
		printf("Stack Underflow");
		return -1;
	}

	int x=temp->data;
	head=head->next;
	free(temp);
	return x;
}
void main(){
	int rm;
	push(10);
	push(20);
	push(30);
	printStack();
	rm=pop();
	printf("Popped Ele : %d\n",rm);
	rm=pop();
	printf("Popped Ele : %d\n",rm);
	rm=pop();
	printf("Popped Ele : %d\n",rm);
}
