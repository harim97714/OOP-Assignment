#include <iostream>
using namespace std;
int main()
{
	double no[5];
	int i;
	cout << "5 개의 실수를 입력하세요." << endl;
	cin >> no[0] >> no[1] >> no[2] >> no[3] >> no[4];
	double max = no[0];
	for (i = 1; i < 5; i++)
	{
		if (no[i] > max)
		{
			max = no[i];
		}
	}
	cout << "제일 큰 수는 " << max << endl;
}