#include <iostream>
using namespace std;
int main()
{
	char str[10000];
	char alpa = 'a'; //맨 처음 알파벳인 'a'로 초기화
	int alpa_count[26];
	int amount = 0; //알파벳 갯수에 대한 변수 초기화
	for (int i = 0; i < 26; i++)
	{
		alpa_count[i] = 0; //갯수 배열 초기화
	}
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(str, 10000, ';'); //문자열 받음
	for (int i = 0; i < strlen(str); i++) //문자열 내의 문자 갯수 까지 증가 
	{
		if (isalpha(str[i])) //입력된 문자열이 알파벳일 경우
		{
			amount += 1;
		}
	}
	cout << "총 알파벳 수 " << amount << endl;
	for (int i = 0; i < strlen(str); i++)
	{
		str[i] = tolower(str[i]); //문자를 소문자로 바꿔주는 함수
		for (int j = 0; j < 26; j++)
		{
			if (isalpha(str[i]))
			{
				if (str[i] == (char)(alpa + j)) //i번째 문자가 알파벳 j번째 문자와 같은 경우
				{
					alpa_count[j] += 1; //해당 j번째 알파벳에 대한 '*' 갯수 1 증가
				}
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		cout << (char)(alpa + i) << "(" << alpa_count[i] << ") : ";
		for (int j = 0; j < alpa_count[i]; j++)
		{
			cout << "*"; //알파벳 갯수만큼 '*' 출력
		}
		cout << endl;
	}
	return 0;
}