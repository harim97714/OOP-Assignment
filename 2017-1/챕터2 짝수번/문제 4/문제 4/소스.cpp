#include <iostream>
using namespace std;
int main()
{
	double no[5];
	int i;
	cout << "5 ���� �Ǽ��� �Է��ϼ���." << endl;
	cin >> no[0] >> no[1] >> no[2] >> no[3] >> no[4];
	double max = no[0];
	for (i = 1; i < 5; i++)
	{
		if (no[i] > max)
		{
			max = no[i];
		}
	}
	cout << "���� ū ���� " << max << endl;
}