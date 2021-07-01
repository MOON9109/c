// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>

#define ADD(a,b)((a)+(b))


int Add(int a, int b)
{

	return a + b;
}

inline int AddNew(int a, int b)
{


	return a + b;
}


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b;
	scanf_s("%d%d", &a, &b);

	printf("ADD(): %d \n", ADD(a, b));
	printf("Add(): %d \n", Add(a, b));
	printf("AddNew(): %d \n", AddNew(a, b));

		

	return 0;
}




