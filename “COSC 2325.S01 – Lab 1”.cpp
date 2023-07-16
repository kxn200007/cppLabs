#include "pch.h"
#include <iostream>
using namespace std;

void main()

{
	long test1 = 52;
	long test2 = 77;
	long test3 = 51;
	long test4 = 84;
	long test5 = 98;
	long test6 = 77;
	long test7 = 85;
	long test8 = 92;
	long test9 = 95;
	long test10 = 81;
	long Avg;

	_asm
	{
		xor eax, eax
		add eax, test1
		add eax, test2
		add eax, test3
		add eax, test4
		add eax, test5
		add eax, test6
		add eax, test7
		add eax, test8
		add eax, test9
		add eax, test10

		mov Avg, eax
	}

	cout << "results are " << Avg << endl;
	system("pause");
}
