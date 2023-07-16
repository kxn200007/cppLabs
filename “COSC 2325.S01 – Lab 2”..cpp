//Kevin Nguyen
#include<iostream.cpp>
using namespace std;

void main()
{

	long var1 = 6;

	long var2 = 10;

	long var3 = 15;

	long var4 = 21;

	long var5 = 22;

	long Sum;

	long Result;

	long Remainder;

	const unsigned int c1 = 6;

	const unsigned int c2 = 10;

	const unsigned int c3 = 21;

	const unsigned int c4 = 15;

	const unsigned int c5 = 22;

	_asm

	{
		mov al, var1
	}

	cout << "Sum is" << Sum << endl;

	cout << "Result is" << Result << endl;

	cout << "Remainder is" << Remainder << endl;

}}