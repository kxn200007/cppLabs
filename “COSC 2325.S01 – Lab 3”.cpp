// “COSC 2325.S01 – Lab 3”.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void main()
{
	long Var1 = 6;
	long Var2 = 10;
	long Var3 = 15;
	long Var4 = 21;
	long Var5 = 22;
	long Sum;
	long Result;
	long Remainder;

	const unsigned short c1 = 6;
	const unsigned short c2 = 10;
	const unsigned short c3 = 21;
	const unsigned  short c4 = 15;
	const unsigned short c5 = 22;


	_asm
	{
		xor eax, eax
		add eax, Var1
		add eax, Var2
		add eax, Var3
		add eax, Var4
		add eax, Var5
		mov Sum, eax
		xor eax, eax
		mov ax, c1
		add ax, c2
		xor ebx, ebx
		mov bx, c3
		sub bx, c4
		mul ebx
		mov Result, eax
		xor ecx, ecx
		add cx, c5
		add cx, c1
		mov Remainder, ecx
		div ecx
		mov Result, eax
		mov Remainder, edx
	}
	cout << "Sum is        " << Sum << endl;
	cout << "Result is     " << Result << endl;
	cout << "Remainder is  " << Remainder << endl;
}
