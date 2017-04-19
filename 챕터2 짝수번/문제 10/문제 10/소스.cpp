#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[10]; //편의상 10바이트 까지만 받음.
	int length = 0;
	cout << "문자열 입력>>" << endl;
	cin.getline(a, 10);
	int i = strlen(a);
	int j;
	for (j = 0; j <= i; j++)
	{
		cout << a[j] << endl;
	}
	return 0;
}