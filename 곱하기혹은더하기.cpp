// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

string str;




int _tmain(int argc, _TCHAR* argv[])
{
	cin >> str;
	// ù��° ���ڸ� ���ڷ� ������ ���� ����
	long long result = str[0] - '0';

	for (int i = 1; i < str.size(); i++){

		// �� �� �߿��� �ϳ��� '0' Ȥ�� '1'�ΰ��, ���ϱ⺸�ٴ� ���ϱ� ����

		int num = str[i] - '0';

		if (num <= 1 || result <= 1) result += num;

		else result *= num;


	}

	cout << result << '\n';
}




