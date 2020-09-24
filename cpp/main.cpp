#include<iostream>


using namespace std;


class Test {

private:

	void Helloword() {

	}

public:

	Test();

};

class FunctionTest : public Test{

private:

	void Helloword() {

	}

public:

	FunctionTest();

};

int main()
{
	int x = 10;

	// ref is a reference to x. 
	int& ref = x;

	// Value of x is now changed to 20 
	ref = 20;
	cout << "x = " << x << endl;

	// Value of x is now changed to 30 
	x = 30;
	cout << "ref = " << ref << endl;

	return 0;
}