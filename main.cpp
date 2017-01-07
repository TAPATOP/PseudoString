#include<iostream>
#include<fstream>
#include<cstdio>

#include"PseudoString.h"

using namespace std;

int main()
{
	PseudoString a = "14";
	PseudoString b = "1";
	PseudoString c = "";

	double as = 1.234;

	cout << to_PseudoString(as) + "aa" << endl;

	cout << c << endl;

	return 0;
}

// bugs so far: not initialized with ""
