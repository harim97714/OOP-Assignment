#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
	int circle_cnt;
	cout << "���� ���� >> ";
	cin >> circle_cnt;
	Circle *a = new Circle[circle_cnt];
	int r;
	int cnt = 0;
	for (int i = 1; i <= circle_cnt; i++)
	{
		cout << "�� " << i << "�� ������ >> ";
		cin >> r;
		a[i].setRadius(r);
	}
	for (int i = 1; i <= circle_cnt; i++)
	{
		if (a[i].getArea() > 100)
			cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;
	return 0;
}