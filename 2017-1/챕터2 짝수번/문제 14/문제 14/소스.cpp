#include <iostream>
using namespace std;
int main()
{
	char str[10000];
	char alpa = 'a'; //�� ó�� ���ĺ��� 'a'�� �ʱ�ȭ
	int alpa_count[26];
	int amount = 0; //���ĺ� ������ ���� ���� �ʱ�ȭ
	for (int i = 0; i < 26; i++)
	{
		alpa_count[i] = 0; //���� �迭 �ʱ�ȭ
	}
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(str, 10000, ';'); //���ڿ� ����
	for (int i = 0; i < strlen(str); i++) //���ڿ� ���� ���� ���� ���� ���� 
	{
		if (isalpha(str[i])) //�Էµ� ���ڿ��� ���ĺ��� ���
		{
			amount += 1;
		}
	}
	cout << "�� ���ĺ� �� " << amount << endl;
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = tolower(str[i]); //���ڸ� �ҹ��ڷ� �ٲ��ִ� �Լ�
		for (int j = 0; j < 26; j++)
		{
			if (isalpha(str[i]))
			{
				if (str[i] == (char)(alpa + j)) //i��° ���ڰ� ���ĺ� j��° ���ڿ� ���� ���
				{
					alpa_count[j] += 1; //�ش� j��° ���ĺ��� ���� '*' ���� 1 ����
				}
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << (char)(alpa + i) << "(" << alpa_count[i] << ") : ";
		for (int j = 0; j < alpa_count[i]; j++)
		{
			cout << "*"; //���ĺ� ������ŭ '*' ���
		}
		cout << endl;
	}
	return 0;
}