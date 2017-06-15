#include <iostream>
using namespace std;
class AbstractGate
{
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};
class ORGate : public AbstractGate
{
public:
	bool operation()
	{
		return this->x ^ this->y;
	}
};
class XORGate : public AbstractGate
{
public:
	bool operation()
	{
		return this->x || this->y;
	}
};
class ANDGate : public AbstractGate
{
public:
	bool operation()
	{
		return this->x && this->y;
	}
};
int main()
{
	ANDGate and;
	ORGate or;
	XORGate xor;

	and.set(true, false);
	or.set(true, false);
	xor.set(true, false);
	cout.setf(ios::boolalpha);
	cout << and.operation() << endl;
	cout << or .operation() << endl;
	cout << xor.operation() << endl;
	return 0;
}