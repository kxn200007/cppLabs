// Kevin Nguyen
// COSC 2325.S01 – Lab 4
#include "pch.h"
#include<iostream>
using namespace std;

int main()
{
	long Sum = 0;
	long Total = 1;
	{ 
		for (int i = 1; i <= 100; ++i)
			Sum += i;
		for (int i = 1; i <= 10; ++i)
			Total *= i;
	}
	cout << "Sum is " << Sum << endl;
	cout << "Total is " << Total << endl;
}