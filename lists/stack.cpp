
#include <iostream>
using std::cout;
using std::endl;

#include <stack>
using std::stack;

#include <cstdlib>

#include <string>
using std::string;

#include <cstring>

void polish(int quant, char *op[]) {
	
	int i, n1, n2, soma, num;

	stack<int> p;

	for (i = 1; i < quant; i++) {

		if(strcmp(op[i], "+") == 0) {
			n1 = p.top();
			p.pop();
			n2 = p.top();
			p.pop();
			p.push(n1 + n2);
		} else if(strcmp(op[i], "-") == 0) {
			n2 = p.top();
			p.pop();
			n1 = p.top();
			p.pop();	
			p.push(n1 - n2);
		} else if(strcmp(op[i], "/") == 0) {
			n2 = p.top();
			p.pop();
			n1 = p.top();
			p.pop();
			p.push(n1 / n2);
		} else if(strcmp(op[i], "*") == 0) {
			n1 = p.top();
			p.pop();
			n2 = p.top();
			p.pop();
			p.push(n1 * n2);
		} else {
			num = atoi(op[i]);
			p.push(num);
		}
	}

	soma = p.top();
	cout << soma << endl;
}

int main(int argc, char *argv[]) {
	
	if(argc < 4) {
		cout << "Calculadora polonesa" << endl;
		cout << "Informe uma operação ex.: ./stack 3 4 \\*" << endl;
		cout << "./stack 3 3 4 + * 2 4 +" << endl;	
		return 0;
	}

	polish(argc, argv);

	return 0;
}