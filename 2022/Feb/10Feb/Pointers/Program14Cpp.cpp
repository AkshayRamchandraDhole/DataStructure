#include<iostream>
struct Cricket{
	std::string team1="MCG";
	std::string team2="SANGHARSH";
	int inns=2;
	int overs=10;
};
int main(){
	struct Cricket c;
	std::cout<<c.team1<<std::endl;
	std::cout<<c.team2<<std::endl;
	std::cout<<c.inns<<std::endl;
	std::cout<<c.overs<<std::endl;
	return 0;
}
