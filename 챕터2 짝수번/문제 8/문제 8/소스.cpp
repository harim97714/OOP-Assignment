#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[100];
	char longest[100];
	int length = 0;
	int i;

	cout << "5���� �̸��� ';' ���� �����Ͽ� �Է��ϼ���. \n������ ������Ե� ';'�� �ٿ��� ���������� �����մϴ�.\n>>";
	for (i = 1; i <= 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
		if (length < strlen(name))
		{
			length = strlen(name);
			strcpy_s(longest, name);
		}
	}
	cout << "���� �� �̸��� " << longest << endl;
}