#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[10]; //���ǻ� 10����Ʈ ������ ����.
	int length = 0;
	cout << "���ڿ� �Է�>>" << endl;
	cin.getline(a, 10);
	int i = strlen(a);
	int j;
	for (j = 0; j <= i; j++)
	{
		cout << a[j] << endl;
	}
	return 0;
}