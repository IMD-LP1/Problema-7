#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	map<string,int> counts{};
	string word{};
	unsigned int tamanho = 0;
	while (cin >> word){             
		++counts[word];
}
	for(auto i : counts){
		if (i.first.size() > tamanho){
			tamanho = i.first.size();
		} 
	}
	cout << "Lista: \n";
	for (auto it : counts)
	{
		cout << setw(tamanho) << left <<  it.first << setw(10) << right << it.second << endl; 	 		
	}



}
