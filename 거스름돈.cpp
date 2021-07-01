// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

int n = 1260;
int cnt;

int coinTypes[4] = { 500, 100, 50, 10 };



int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 0; i < 4; i++){
		cnt += n / coinTypes[i];
		n %= coinTypes[i];

	}
	cout << cnt << endl;
}




