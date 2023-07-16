// COSC 2325.S01 – Lab 8.cpp 
// Kevin Nguyen


#include "pch.h"
#include <iostream>
using namespace std;

void main()

{
	long test1 = 52;
	long test2 = 77;
	long test3 = 51;
	long test4 = 89;
	long test5 = 98;
	long test6 = 74;
	long test7 = 85;
	long test8 = 92;
	long test9 = 95;
	long test10 = 86;
	long numtest = 10;
	long Avg;
	long remainder;

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

	cout << "avg test scores are: " << Avg << endl;
	cout << "best grade: " << test5 << endl;
	system("pause");
}