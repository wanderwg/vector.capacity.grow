#include <iostream>
#include <vector>
using namespace std;

int main()
{
	size_t sz;
	vector<int> foo;
	sz = foo.capacity();
	cout << "making foo grow:" << endl;
	for (size_t i = 0; i < 100; ++i)
	{
		foo.push_back(i);
		if (sz != foo.capacity())
		{
			sz = foo.capacity();
			cout << "capacity changed: " << sz << endl;
		}
	}

	vector<int> bar;
	sz = bar.capacity();
	bar.reserve(100);
	cout << "making bar grow:" << endl;
	for (size_t i = 0; i < 100; ++i)
	{
		bar.push_back(i);
		if (sz != bar.capacity())
		{
			sz = bar.capacity();
			cout << "capacity changed: " << sz << endl;
		}
	}
	return 0;
}