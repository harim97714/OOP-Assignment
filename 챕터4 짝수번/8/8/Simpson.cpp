#include <iostream>
#include <string>
#include "Simpson.h"
using namespace std;
void Family::show()
{
	cout << name << "������ ������ ���� " << size << "�� �Դϴ�." << endl;
	for (int i = 0; i<size; i++)
		cout << p[i].getName() << "\t";
	cout << endl;
}