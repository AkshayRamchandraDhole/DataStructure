#include<iostream>
struct Book{
	std::string bName="2States";
	std::string aName="Chetan Bhagat";
	int pages=350;
	float price=450.50;
};
int main(){
	//struct Book bk;
	//Book bk;
	Book *bk = new Book();
	std::cout<<bk->bName<<std::endl;
	std::cout<<bk->aName<<std::endl;
	std::cout<<bk->pages<<std::endl;
	std::cout<<bk->price<<std::endl;
	
	/*std::cout<<bk.bName<<std::endl;
	std::cout<<bk.aName<<std::endl;
	std::cout<<bk.pages<<std::endl;
	std::cout<<bk.price<<std::endl;*/
	return 0;
}
