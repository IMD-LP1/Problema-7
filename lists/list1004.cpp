#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> data{};
	int i = 0;
	int x{};
	// Read integers one at a time.
	while(i < 3){
	cin >> x;

	data.push_back(x);
	i++;
}

	// Sort the vector.
	sort(data.begin(), data.end());

	for(auto s: data){
		cout << s << cout.fill(' ') << s*2 << cout.fill(' ') << setw(4) <<   s*s << endl;
	}
	// Print the vector, one number per line.
//	copy(data.begin(), data.end(), ostream_iterator<int>(cout, "\n"));

}
