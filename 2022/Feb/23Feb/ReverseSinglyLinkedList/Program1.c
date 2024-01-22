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

int count(){

	struct Node *temp = head;
	
	int count = 0;
		
	while(temp != NULL){
		count++;
		temp=temp->next;
	}
	
	printf("Count = %d\n",count);
	return count;
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
	struct Node *temp2=temp->next;
	temp->next=temp2->next;
	free(temp2);
}
void reverse(){
	
	struct Node *temp1 = head;
	struct Node *temp2 = head;
	
	int cnt = count();

	int x = 0;
	
	while(x<(cnt/2)){
		
		int num = 1;
		while(num < cnt - x){
			temp2 = temp2 -> next;
			num++;
		}
	
		int swap = 0;
		swap = temp2->data;
		temp2->data = temp1->data;
		temp1->data = swap;

		temp2=head;
		temp1=temp1->next;
		
		x++;

	}

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


	/*6. deleteFirst()
	deleteFirst();	
	printNode();
	printf("\n");
	
	//7. deleteLast()
	deleteLast();	
	printNode();
	printf("\n");
	
	//8. deleteAtPos()
	printf("Enter Pos : \n");
	scanf("%d",&pos);
	deleteAtPos(pos);
	printNode();
	printf("\n");
*/
	//9.reverse()
	reverse();
	printNode();
	printf("\n");
	
		
}
