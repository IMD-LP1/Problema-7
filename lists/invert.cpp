#include <iostream>
#include <string>
#include <vector>
using namespace std;
 /** USO DO RBEGIN // REVERVE_ITERATOR */ 
int main()
{
	string name;
	int x;
	std::vector<int> v{};
	cout << "Digite seu nome completo :\n";
	getline(cin,name);
	cout << "Digite sua data de nascimento:\n";
	while(cin >> x){
		v.push_back(x);
	}
	cout << "Nome invertido!\n";
	for(string::reverse_iterator rev = name.rbegin(); rev < name.rend(); rev++){
		cout << *rev;
	}
	cout << endl;
	cout << "Data invertida!\n";
	for(vector<int>::reverse_iterator rev2 = v.rbegin(); rev2 < v.rend(); rev2++){
		cout << *rev2 << " ";
	}
	cout << endl;
}
