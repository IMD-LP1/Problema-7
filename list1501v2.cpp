#include <iostream>
#include <map>
#include <string>
#include <iomanip> 
int main(){
	
	std::map<std::string, int> counts{};
	std::map<std::string, int>::iterator it;
	std::string word{};

	int n{0};

	while(std::cin >> word)
		++counts[word];


	for(auto e : counts) {
		if(int(e.first.size()) > n)
			n = e.first.size();
	}	
	 std::cout.setfill(' ');
	for(auto e : counts) { 
		std::cout << std::left << std::setw(n) << e.first  
					 << std::right << std::setw(10)  << e.second ;
		std::cout << std::endl;
	}

	for(auto e : counts)
		std::cout << std::setw(n) << std::left << e.first << setw(10) << right e.second << std::endl;

}