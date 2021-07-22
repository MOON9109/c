// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <bits/stdc++.h>

//#include<stdio.h> 
//#include <iostream>
//
//#include <vector>
//
//#include <queue>
//
//#include <algorithm>

using namespace std;

struct Loc{

	int x, y, z;

	Loc(int a, int b, int c){

		x = a;
		y = b;
		z = c;
	}

	bool operator<(const Loc &b)const{
		return x<b.x;
	}

};
//내림 차순할때는 부등호 바꿔줄것

int _tmain(int argc, _TCHAR* argv[])
{
	vector<Loc> XY;
	XY.push_back(Loc(2, 3, 5));
	XY.push_back(Loc(3, 6, 7));
	XY.push_back(Loc(2, 3, 1));
	XY.push_back(Loc(5, 2, 3));
	XY.push_back(Loc(3, 1, 6));


	sort(XY.begin(), XY.end());

	for (auto pos : XY) cout << pos.x << " " << pos.y << " " << pos.z << endl;
	return 0;
}

