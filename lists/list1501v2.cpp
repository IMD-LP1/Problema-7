#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string,int> counts{};
	string word{};

	while (cin >> word){             
		++counts[word];
}

	cout << "Lista: \n";
	for (auto it : counts)
	{
		cout << it.first << " " << it.second << endl; 	 		
	}
}
