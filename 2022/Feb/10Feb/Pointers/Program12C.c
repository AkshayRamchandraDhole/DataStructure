#include<stdio.h>
struct Book{
	char bName[40];
	char aName[40];
	int pages;
	float price;
};
void main(){
	struct Book bk = {"2States","Chetan Bhagat",350,450.50};
	printf("%s\n",bk.bName);
	printf("%s\n",bk.aName);
	printf("%d\n",bk.pages);
	printf("%f\n",bk.price);
}
