#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	vector<int> data{};
	int x{};
	while(cin >> x){
		data.push_back(x);
	}

	for(auto start(data.begin()), end(data.end()); start < end; ++start){
		--end;
		iter_swap(start, end);
	}

	copy(data.begin(), data.end(), ostream_iterator<int>(cout, "\n"));

}
