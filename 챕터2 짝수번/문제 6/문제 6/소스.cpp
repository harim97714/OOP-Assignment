#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	cout << "새로운 비밀번호를 입력해주세요.>> ";
	cin >> s1;
	cout << "비밀번호를 다시 입력해주세요.>> ";
	cin >> s2;
	if (s1 == s2)
	{
		cout << "맞습니다." << endl;
	}
	else
	{
		cout << "틀렸습니다." << endl;
	}
	return 0;
}