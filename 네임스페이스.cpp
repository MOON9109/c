// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

namespace TEST
{

	int g_Data = 100;

	void TestFunc(void)
	{

		std::cout << "TEST::TestFunc" << std::endl;
	}

}


int _tmain(int argc, _TCHAR* argv[])
{
	TEST::TestFunc();
	std::cout << TEST::g_Data << std::endl;
		

	return 0;
}




