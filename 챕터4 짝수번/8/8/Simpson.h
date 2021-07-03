#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
	string name;
public:
	Person() { ; }
	Person(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setname(string name)
	{
		this->name = name;
	}
};

class Family
{
	Person *p;
	int size;
	string name;
public:
	Family(string name, int size)
	{
		p = new Person[size];
		this->size = size;
		this->name = name;
	}
	void setName(int n, string name)
	{
		p[n].setname(name);
	}
	void show();
	~Family()
	{
		delete[] p;
	}
};