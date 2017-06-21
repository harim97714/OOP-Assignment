#include <iostream>
using namespace std;
template <class B>
B biggest(B data[], int n)
{
	B max = 0;
	for (int i = 0; i < n; i++)
		max = max < data[i] ? data[i] : max;
	return max;
}
int main()
{
	int x[] = { 1, 10, 100, 5, 4 };
	cout << biggest(x, 5) << endl;
	return 0;
}