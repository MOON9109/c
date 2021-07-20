

#include <bits/stdc++.h>
//#include <stdio.h>
//#include<iostream>
//#include <vector>
//#include <algorithm>

using namespace std;

//vector 사용법 


int main(){
	
//	int n;
//	cin>> n; 
//	vector<int> a(n); // 이렇게 가능!! 
	//vector<int> a; 
	
	//vector<int> a(5); //사이즈 지정 가능 
	
	// 값추가 
//	a.push_back(6); 
//	a.push_back(8);
//	a.push_back(11);
//	cout<<a.size()<< endl;
//	
//	// 8출력 
//	cout<<a[1]<<endl; 

//	vector<int> c[3]; // 벡터가 세개 생김
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
	graph[1].push_back({3, 5}); //0인덱스 3,5 들어감 
	graph[1].push_back({4, 7});//1 인덱스에 4, 7들어감 
	graph[1].push_back({5, 9});// 2인덱스에 5, 9들어감 
	graph[2].push_back(make_pair(7,7));
	cout<<graph[2][0].first << " "  << graph[2][0].second<<endl; 
	return 0; 
}
