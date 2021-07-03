#include <iostream>
#include <string>
#include "String.h"
using namespace std;
void String::reverse()
{
	while (1)
	{
		cout << ">>";
		getline(cin, s);
		if (s == "exit")
			break;
		int len = s.length();
		int leng = s.length();
		for (int i = 0; i < leng; i++)
		{
			cout << s[len - 1];
			len--;
		}
		cout << endl;
	}
}