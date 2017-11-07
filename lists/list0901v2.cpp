#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> data{};
	int x{};
	// initialized to be empty.
	// Read integers one at a time.
	while(cin >> x)
	// Store eah integer int the vector.
	data.push_back(x);
	// Sort the vector.
	sort(data.begin(), data.end());
	// Print the vector, one number per line.
	for (std::vector<int>::iterator i = data.begin(); i != data.end(); ++i)
		cout << *i << " ";

}
