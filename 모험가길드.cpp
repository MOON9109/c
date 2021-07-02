// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr;




int _tmain(int argc, _TCHAR* argv[])
{

	cin >> n;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	// 오름차순
	sort(arr.begin(), arr.end()); 


	int result = 0; // 총 그룹의 수
	int cnt = 0; // 현재 그룹에 포함된 모험가의 수
	for (int i = 0; i < n; i++){
		cnt += 1;
		if (cnt >= arr[i]){
			result += 1;
			cnt = 0;
		}

	}

	cout << result << '\n';

}




