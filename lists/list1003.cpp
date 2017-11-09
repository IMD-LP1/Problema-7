#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> data{};

	// Read integers one at a time.
	copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter(data));

	// Sort the vector.
	sort(data.begin(), data.end());

	// Print the vector, one number per line.
	copy(data.begin(), data.end(), ostream_iterator<int>(cout, "\n"));

}
