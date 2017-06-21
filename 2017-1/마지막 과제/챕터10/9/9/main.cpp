#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	int sum = 0;
	int input = -1;
	int idx = 0;
	int cnt = 0;
	while (1)
	{
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> input;
		cnt++;
		if (input == 0)
			break;
		v.push_back(input);
		sum = 0;
		for (int idx = 0; idx < v.size(); idx++)
		{
			sum += v[idx];
			cout << v[idx] << ' ';
		}
		cout << endl;
		cout << "평균 = " << (float)sum / cnt << endl;
	}
	return 0;
}