#include<iostream>
struct Player{
	char pName[20] = "MSD";
	int jerNo = 7;
	char cName[20] = "India";
	float sal = 570.00;
};
void passCric(struct Player *cric){
	std::cout<<cric->pName<<std::endl;
	std::cout<<cric->jerNo<<std::endl;
	std::cout<<(*cric).cName<<std::endl;
	std::cout<<(*cric).sal<<std::endl;

}
int main(){
	Player *Cric = new Player();
	passCric(Cric);
	return 0;
}
