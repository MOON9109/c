// Win32Project1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

bool visited[9];
vector<int> graph[9];

void dfs(int x){
	// ���� ��带 �湮ó��
	visited[x] = true;
	cout << x << ' ';
	// ���� ���� ����� �ٸ� ��带 ��������� �湮
	for (int i = 0; i < graph[x].size(); i++){
		int y = graph[x][i];
		if (!visited[y]) dfs(y);

	}

}

int _tmain(int argc, _TCHAR* argv[])
{
	// ��� 1�� ����� ��� ���� ����
	graph[1].push_back(2);
	graph[1].push_back(3);
	graph[1].push_back(8);

	// ��� 2�� ����� ��� ���� ����
	graph[2].push_back(1);
	graph[2].push_back(7);

	//��� 3�� ����� ��� ���� ����
	graph[3].push_back(1);
	graph[3].push_back(4);
	graph[3].push_back(5);
	// ��� 4�� ����� ��� ���� ����

	graph[4].push_back(3);
	graph[4].push_back(5);
	// ��� 5�� ����� ��� ���� ����
	graph[5].push_back(3);
	graph[5].push_back(4);
	// ��� 6�� ����� ��� ���� ����
	graph[6].push_back(7);
	// ��� 7�� ����� ��� ���� ����
	graph[7].push_back(2);
	graph[7].push_back(6);
	graph[7].push_back(8);

	// ��� 8�� ����� ��� ���� ����
	graph[8].push_back(1);
	graph[8].push_back(7);
	
	dfs(1);
	return 0;
}



