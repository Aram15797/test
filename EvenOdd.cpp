#include <iostream>

int main(){

	int num = 0;

	std::cout<<"write the number\n";
	std::cin>>num;
	
	if (num % 2 == 0){
	    std::cout<<"Even number"<<std::endl;
	}else{
	    std::cout<<"Odd number"<<std::endl;
	}
	
	return 0;
}
