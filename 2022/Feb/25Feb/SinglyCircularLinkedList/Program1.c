#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head = NULL;
struct Node *tail = NULL;

void printList(){
	struct Node *temp=head;
	do{
		if(temp->next!=head)
			printf("|%d|->",temp->data);
		else
			printf("|%d|",temp->data);
			
		temp=temp->next;
	}while(temp!=head);

}
void addFirst(int data){
	
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=newNode;
	
	newNode->next=head;
	tail->next=newNode;
	head=newNode;
}
void addLast(int data){
	
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=newNode;

	newNode->next=head;
	tail->next=newNode;
	tail=newNode;


}
void count(){
	struct Node *temp = head;
	int cnt = 0;
	do{
		temp=temp->next;
		cnt++;
	}while(temp!=head);
	printf("%d\n",cnt);
}
void addAtPos(int data,int pos){
	
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=newNode;

	struct Node *temp=head;
	while(pos-2){
		temp=temp->next;
		pos--;
	}
	newNode->next=temp->next;
	temp->next=newNode;

	

}
void deleteFirst(){
	head=head->next;
	free(tail->next);
	tail->next=head;
}
void deleteLast(){
	struct Node *temp=head;
	while(temp->next->next!=head){
		temp=temp->next;
	}
	temp->next=head;
	free(tail);
	tail=temp;
}
void deleteAtPos(int pos){
	struct Node *temp=head;
	while(pos-2){
		temp=temp->next;
		pos--;
	}
	struct Node *temp2 = temp->next;
	temp->next=temp2->next;
	free(temp2);
}
void reverse(){
	struct Node *temp1=head;
	struct Node *temp2=NULL;
	struct Node *temp3=tail;
	
	while(temp2!=head){
		temp2=temp1->next;
		temp1->next=temp3;
		temp3=temp1;
		temp1=temp2;
	}
	head=temp3;
	tail=temp1;
	
}	
void main(){
	
	struct Node *newNode = malloc(sizeof(struct Node));
	newNode->data=10;
	newNode->next=newNode;

	head=newNode;
	tail=newNode;

	char ch;
	
	do{
		printf("Singly Circular Linked List\n");
		printf("1.PrintList\n");
		printf("2.Count\n");
		printf("3.addFirst\n");
		printf("4.addLast\n");
		printf("5.addAtPos\n");
		printf("6.deleteFirst\n");
		printf("7.deleteLast\n");
		printf("8.deleteAtPos\n");
		printf("9.reverse\n");

		int choice;
		printf("Enter Choice:\n");
		scanf("%d",&choice);

		switch(choice){
			
			case 1:
				printList();
				printf("\n");
				break;
			case 2:
				count();
				break;

			case 3:
				{
					int data;
					printf("Enter Data:\n");
					scanf("%d",&data);
					addFirst(data);
					printList();
					printf("\n");
				}
				break;
			
			case 4:
				{
					int data;
					printf("Enter Data:\n");
					scanf("%d",&data);
					addLast(data);
					printList();
					printf("\n");
				}
				break;
			case 5:
				{
					int data;
					printf("Enter Data:\n");
					scanf("%d",&data);
					int pos;
					printf("Enter Pos:\n");
					scanf("%d",&pos);
					addAtPos(data,pos);
					printList();
					printf("\n");
				}
				break;
			case 6:
				deleteFirst();
				printList();
				printf("\n");
				break;
			case 7:
				deleteLast();
				printList();
				printf("\n");
				break;
			case 8:
				{
					int pos;
					printf("Enter Pos:\n");
					scanf("%d",&pos);
					deleteAtPos(pos);
					printList();
					printf("\n");
				}
				break;
			case 9:
				reverse();
				printList();
				printf("\n");
				break;
			default:
				printf("Wrong Choice\n");
				break;
			}
				printf("\n Do you want to continue \n");
				getchar();
				scanf("%c",&ch);
			
		
		
	}while(ch=='y'||ch=='Y');
	

}
	
