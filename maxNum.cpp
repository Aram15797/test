#include <iostream>

int main(){

	int dig = 0;
	int max = 0;
	int num = 0;

	std::cout<<"write the number of digits\n";
	std::cin>>dig;

	for (int i {0}; i < dig; i++){
	 	
	    std::cout<<"press num N="<<i+1<<std::endl;	
	    std::cin>>num;

	    if (max < num){
		max = num;
	    }
	    
	}
	
	std::cout<<"The max number is "<<max<<std::endl;
	return 0;
}
