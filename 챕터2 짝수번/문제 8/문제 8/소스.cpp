#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name[100];
	char longest[100];
	int length = 0;
	int i;

	cout << "5명의 이름을 ';' 으로 구분하여 입력하세요. \n마지막 사람에게도 ';'를 붙여야 정상적으로 동작합니다.\n>>";
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
	cout << "가장 긴 이름은 " << longest << endl;
}