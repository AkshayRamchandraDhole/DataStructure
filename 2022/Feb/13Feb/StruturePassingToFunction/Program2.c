#include<stdio.h>
#include<stdlib.h>
struct Player{
	char pName[20];
	int jerNo;
	char cName[20];
	float sal;
	
} bb = {"Kobe",20,"USA",950.00};
void passCric(struct Player *cric){
	printf("%s\n",cric->pName);
	printf("%d\n",cric->jerNo);
	printf("%s\n",cric->cName);
	printf("%f\n",cric->sal);
}
void passFb(struct Player *fb){
	
	printf("%s\n",fb->pName);
	printf("%d\n",fb->jerNo);
	printf("%s\n",fb->cName);
	printf("%f\n",fb->sal);

}
void passBb(){
	
	printf("%s\n",bb.pName);
	printf("%d\n",bb.jerNo);
	printf("%s\n",bb.cName);
	printf("%f\n",bb.sal);

}
void main(){
	
	struct Player cric = {"Virat Kohli",18,"India",250.00};
	struct Player *cptr = &cric;
	passCric(cptr);
	
	struct Player fb = {"Messi",10,"Argentina",650.00};
	struct Player *fptr = &fb;
	passCric(fptr);
	
	passBb();
}

