#include <iostream>
#include <string>
#include "Histogram.h"
using namespace std;
void Histogram::put(string h)
{
	this->his += h;
	for (int i = 0; i < h.size(); i++)
	{
		if (isalpha(h.at(i)))
			len++;
	}
}
void Histogram::putc(char h)
{
	this->his += h;
	if (isalpha(h))
		len++;
}
void Histogram::print()
{
	cout << his << endl << endl << "총 알파벳 수 " << len << endl << endl;
	char temp;
	for (int i = 0; i < his.size(); i++)
	{
		if (isalpha(his.at(i)))
		{
			temp = tolower(his.at(i));
			count[temp - 97]++;
		}
	}
	for (int i = 0; i<26; i++)
	{
		printf("%c (%d)\t: ", 97 + i, count[i]);
		for (int j = 0; j < count[i]; j++)
			cout << "*";
		cout << endl;
	}
}