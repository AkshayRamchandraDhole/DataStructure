#include<stdio.h>
struct Cricket{
	char Team1[40];
	char Team2[40];
	int inns;
	int overs;
};
void main(){
	struct Cricket c = {"MCG","SANGHARSH",2,10};
	printf("%s\n",c.Team1);
	printf("%s\n",c.Team2);
	printf("%d\n",c.inns);
	printf("%d\n",c.overs);
}
