#pragma once
#include <iostream>
#include <string>
using namespace std;
class Histogram
{
	string his;
	int len;
	int count[26];
public:
	Histogram(string h)
	{
		his = h + "\n"; len = 0;
		for (int i = 0; i < h.size(); i++)
		{
			if (isalpha(his.at(i)))
				len++;
		}
		for (int i = 0; i < 26; i++)
			count[i] = 0;
	}
	void put(string h);
	void putc(char h);
	void print();
};