

#include <bits/stdc++.h>
//#include <stdio.h>
//#include<iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

//vector ���� 


int main(){
	
//	int n;
//	cin>> n; 
//	vector<int> a(n); // �̷��� ����!! 
	//vector<int> a; 
	
	//vector<int> a(5); //������ ���� ���� 
	
	// ���߰� 
//	a.push_back(6); 
//	a.push_back(8);
//	a.push_back(11);
//	cout<<a.size()<< endl;
//	
//	// 8��� 
//	cout<<a[1]<<endl; 

//	vector<int> c[3]; // ���Ͱ� ���� ����
//	c[0].push_back(1);  
//	c[0].push_back(3); 
//	c[0].push_back(5);
//	
//	c[1].push_back(2);
//	c[1].push_back(4);
//	c[1].push_back(6);
//	
//	
//	c[2].push_back(7);
//	
//	 
//	cout<< c[1][1] <<endl;
	
	
	vector<pair<int, int> > graph[3]; 
	graph[1].push_back({3, 5}); //0�ε��� 3,5 �� 
	graph[1].push_back({4, 7});//1 �ε����� 4, 7�� 
	graph[1].push_back({5, 9});// 2�ε����� 5, 9�� 
	graph[2].push_back(make_pair(7,7));
	cout<<graph[2][0].first << " "  << graph[2][0].second<<endl; 
	return 0; 
}
