#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	cout << "���ο� ��й�ȣ�� �Է����ּ���.>> ";
	cin >> s1;
	cout << "��й�ȣ�� �ٽ� �Է����ּ���.>> ";
	cin >> s2;
	if (s1 == s2)
	{
		cout << "�½��ϴ�." << endl;
	}
	else
	{
		cout << "Ʋ�Ƚ��ϴ�." << endl;
	}
	return 0;
}