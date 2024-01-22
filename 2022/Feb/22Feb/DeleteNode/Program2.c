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

void insertAtPos(int pos){
	
	struct Node *temp=head;
	struct Node *newNode = malloc(sizeof(struct Node));
	
	newNode->data = 25;
	newNode->next = NULL;
	
	while(pos-2){
	
		temp = temp->next;
		pos--;
	}
	newNode->next = temp->next;
	temp->next = newNode;

}
void deleteFirst(){
	
	struct Node *temp=head;
	
	head = head->next;
	
	free(temp);
	
	//printf("%d\n",temp->data);
}

void deleteLast(){

	struct Node *temp=head;

	while(temp->next->next !=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;

}
void deleteAtPos(int pos){
	struct Node *temp=head;
	while(pos-2){
		temp=temp->next;
		pos--;
	}
	struct Node *temp2 = temp->next;
	temp->next = temp2->next;

	free(temp2);
}
int search(int data){

	int pos=1;
	struct Node *temp=head;
	while(temp!=NULL){
		
			if(temp->data==data)
				return pos;
			pos++;
			temp = temp->next;
	}
	return 0;

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

	// 5. insertAtPos()
	int pos=0;
	printf("Enter Pos : \n");
	scanf("%d",&pos);
	insertAtPos(pos);
	printNode();
	printf("\n");
	
	// delete from data
	int data=0;
	printf("Enter Data : \n");
	scanf("%d\n",&data);
	int ret = search(data);
	if(ret==0)
		printf("Data not found\n");
	else
		deleteAtPos(ret);


	/*//6. deleteFirst()
	deleteFirst();	
	printNode();
	printf("\n");
	
	//7. deleteLast()
	deleteLast();	
	printNode();
	printf("\n");
	*/

	/*8. deleteAtPos()
	printf("Enter Pos : \n");
	scanf("%d",&pos);
	deleteAtPos(pos);
	printNode();
	printf("\n");
	*/
	
	
		
}
