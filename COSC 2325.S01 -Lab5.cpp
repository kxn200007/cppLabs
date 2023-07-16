//Kevin Nguyen
//COSC 2325.S01 -Lab5
#include "pch.h"
#include <iostream>
using namespace std;

void main()
{
	unsigned long i1;
	unsigned long i2;
	unsigned long i3;
	unsigned long i4;

	_asm
	{	mov i1, 1
		mov i2, 1
		mov i3, 0
		mov i4, 0
		mov ecx, 15
		
		l1:
		mov ebx, 3
		mov eax, i1
		cmp eax, 100
		ja l2
		add eax, ebx
		mov i1, eax
		inc i3

		mov eax, i2
		mul ebx
		mov i2, eax
		cmp ecx, 0
		je l2
		loop l1

		l2 :
		mov edx, 0
		mov eax, i1
		mov ecx, i3
		div ecx
		mov i4, edx
	}
	cout << "results are " << (unsigned long)i1 << ", " 
		<< (unsigned long)i2 << ", " 
		<< (unsigned long)i3 << ", " 
		<< (unsigned long)i4 << endl;
	system("pause");
}