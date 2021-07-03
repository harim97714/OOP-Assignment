#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
	int circle_cnt;
	cout << "원의 개수 >> ";
	cin >> circle_cnt;
	Circle *a = new Circle[circle_cnt];
	int r;
	int cnt = 0;
	for (int i = 1; i <= circle_cnt; i++)
	{
		cout << "원 " << i << "의 반지름 >> ";
		cin >> r;
		a[i].setRadius(r);
	}
	for (int i = 1; i <= circle_cnt; i++)
	{
		if (a[i].getArea() > 100)
			cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다." << endl;
	return 0;
}