#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom
{
public:
	SelectableRandom()
	{
		srand((unsigned)time(0));
	}
	int next()
	{
		return rand()/2*2;
	}
	int nextInRange(int a, int b)
	{
		int length = b - a + 1;
		return a + (rand() % length)/2*2+1;
	}
};

int main()
{
	SelectableRandom r;
	cout << "--0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "9 까지의 랜덤 홀수 정수 10개--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}