#include <iostream>
#include <string>
using namespace std;
class Seat
{
	string name;
	int no;
public:
	Seat() { this->name = "---"; this->no = -1; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};
class Schedule
{
	Seat *seat;
public:
	Schedule()
	{
		seat = new Seat[8];
	}
	void show(int no)
	{
		if (no == 1)
			cout << "7시:";
		else if (no == 2)
			cout << "12시: ";
		else if (no == 3)
			cout << "17시: ";
		for (int i = 0; i < 8; i++)
			cout << "\t" << seat[i].getName();
		cout << endl;
	}
	void setN(int no, string name) { seat[no - 1].setName(name); }
	string getN(int no) { return seat[no - 1].getName(); }
};
class Console
{
public:
	int menu()
	{
		int no;
		cout << "\n예약:1, 취소:2, 보기:3, 끝내기:4 >>";
		cin >> no;
		return no;
	}
	int time_menu()
	{
		int no;
		cout << "7시:1, 12시:2, 17시:3 >>";
		cin >> no;
		return no;
	}
};
class AirlineBook
{
	Schedule *s;
public:
	AirlineBook()
	{
		s = new Schedule[3];
	}
	void program()
	{
		bool exit = false;
		int no;
		Console c;
		int seat_no;
		string name;
		while(!exit)
		{
			no = c.menu();
			if (no == 1)
			{
				no = c.time_menu();
				if (no == 1 || no == 2 || no == 3)
				{
					s[no - 1].show(no);
					cout << "좌석 번호 >>";
					cin >> seat_no;
					cin.ignore(1);
					cout << "이름 입력 >>";
					getline(cin, name);
					s[no - 1].setN(seat_no, name);
				}
				else
					cout << "숫자를 잘못 입력하셨습니다." << endl;
			}
			else if (no == 2)
			{
				no = c.time_menu();
				if (no == 1 || no == 2 || no == 3)
				{
					s[no - 1].show(no);
					cout << "좌석 번호 >>";
					cin >> seat_no;
					cin.ignore(1);
					cout << "이름 입력 >>";
					getline(cin, name);
					if (name != s[no - 1].getN(seat_no))
						cout << "해당 좌석에 예약된 이름과 일치하지 않습니다." << endl;
					else
						s[no - 1].setN(seat_no, "---");
				}
				else
					cout << "잘못된 입력입니다." << endl;
			}
			else if (no == 3)
			{
				s[0].show(1);
				s[1].show(2);
				s[2].show(3);
			}
			else if (no == 4)
			{
				cout << "예약 시스템을 종료합니다." << endl << endl;
				exit = true;
			}
			else
				cout << "잘못된 입력입니다." << endl;
		}
	}
};
int main()
{
	AirlineBook *Air = new AirlineBook();

	cout << "*** 한성항공에 오신것을 환영합니다. ***" << endl;
	Air->program();
	return 0;
}