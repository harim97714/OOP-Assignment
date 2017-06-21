#include <iostream>
using namespace std;

class Oval
{
	int w;
	int h;
public:
	Oval();
	Oval(int w, int h);
	~Oval();
	void set(int w, int h);
	int getWidth();
	int getHeight();
	void show();
};

Oval::Oval()
{
	w = 1;
	h = 1;
}
Oval::Oval(int w, int h)
{
	this->w = w;
	this->h = h;
}
Oval::~Oval()
{
	cout << "Oval 소멸: width = " << w << ", height = " << h << endl;
}
int Oval::getWidth()
{
	return w;
}
int Oval::getHeight()
{
	return h;
}
void Oval::set(int w, int h)
{
	this->w = w;
	this->h = h;
}
void Oval::show()
{
	cout << "Width = " << w << ", height = " << h << endl;
}

int main()
{
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
	return 0;
}