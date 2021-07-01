// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

int n, k;
int result;





int _tmain(int argc, _TCHAR* argv[])
{
	cin >> n >> k;

	while (true){

		int target = (n / k) * k;
		result += (n - target);
		n = target;

		if (n < k) break;
		result++;
		n /= k;



	}

	result += (n - 1);
	cout << result << endl;
}




