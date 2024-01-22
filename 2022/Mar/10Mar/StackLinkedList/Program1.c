// STACK IMPLEMENTION USING LINKED LIST (addLast and deleteLast)
#include<stdio.h>
#include<stdlib.h>

struct Node{
		int data;
		struct Node *next;
};
struct Node *head = NULL;
struct Node *top = NULL;

void push(int data){
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;

	top = newNode;

	if(head == NULL){
		head=newNode;
	}else{

		struct Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next=top;
	}	
}
void printStack(){
	struct Node *temp = head;

	while(temp!=top){
		while(temp->next!=top){
			temp=temp->next;
		}
		printf("%d\n",top->data);
		top=temp;
		temp=head;
	}
	printf("%d\n",top->data);

}

int pop(){
	struct Node *temp=NULL;
	int val;
	if(head->next == NULL){
		return head->data;
	}else{
		while(top->next->next!=NULL){
			top=top->next;
		}
		temp=top->next;
		top->next=NULL;
		val=temp->data;
		free(temp);
		top=head;
	}
	return val;
}
void main(){
	push(10);
	push(20);
	push(30);
	printStack();
	int rm = pop();
	printf("%d\n",rm);
	rm = pop();
	printf("%d\n",rm);
	rm = pop();
	printf("%d\n",rm);
}
