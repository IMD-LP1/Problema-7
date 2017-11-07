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
	for (vector<int>::size_type i{0}, end{data.size()}; i != end; ++i)
		cout << data.at(i) << '\n';

}
