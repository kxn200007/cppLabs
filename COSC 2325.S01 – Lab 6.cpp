// COSC 2325.S01 – Lab 6.cpp 
// Kevin Nguyen

#include "pch.h"
#include <iostream>
using namespace std;

void main() {
	int memberLevel[] = {1,3,3,4,2,4,0,1,4,2,1,4,2,2,3};
	int officerList[] = {0,13,0,0,2,12,0,1,0,3,2,1,11,0,1};
	int members[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	_asm {
		mov ebx, 0
		xor ecx, ecx
		xor eax, eax
		xor edx, edx
		label1:
		cmp ebx, 15
		je label2
			add esi, 4
			inc ebx
			cmp memberLevel[esi], 4
		jne label1
			cmp officerList[esi], 9
			jg label1
			cmp officerList[esi], 0 
			je label1
			mov eax, esi
			mov esi, edx
			add edx, 4
			mov members[esi], ebx
			mov esi, eax
			inc ecx
			jmp label1
			label2:
	}
	cout << "Member" << members[0] << endl;
	system("pause");
}