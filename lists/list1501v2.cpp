#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string,int> counts{};
	string word{};

	while (getline(cin,word) && word != "."){             // O ponto seria a hora de parar de ler.
		++counts[word];
}

	cout << "Lista: \n";
	for (auto it : counts)
	{
		cout << it.first << " " << it.second << endl; 	 		// imprime a palavra e depois o número de vezes.
	}
}
