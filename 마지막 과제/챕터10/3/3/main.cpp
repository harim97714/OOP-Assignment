#include <iostream>
using namespace std;
template <class R>
void reverseArray(R data[], int n)
{
	int a = n - 1;
	for (int i = 0; i <= n / 2; i++, a--)
	{
		R tmp = data[a];
		data[a] = data[i];
		data[i] = tmp;
	}
}
int main()
{
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';
	cout << endl;
	return 0;
}