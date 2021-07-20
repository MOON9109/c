

//#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int ch[30], n, cost=2147000000; 
vector<pair<int, int> > map[30]; 
void DFS(int v, int sum){
	int i ; 
	if (v==n){
		
		if(sum<cost) cost =sum; 
	}
	else{
		for(i=0 ; i<map[v].size(); i++){
			
			if(ch[map[v][i].first]==0){
				ch[map[v][i].first]=1; 
				DFS(map[v][i].first, sum+map[v][i].second);
				ch[map[v][i].first]=0; 
				
				
			}
		}
		
	}
	
}



int main(){
	
	//pair<int, int> p; // p라는 이름으로 관리됨 ,  다른 자료형도 가능함
	 
	// p.first , p.second 로 관리
	//p=make_pair(10,20); // 10,20이 들어감
	
	 
	 
	//printf("%d %d\n", p.first, p.second);
	 
	int m, i, a,b, c;
	
	scanf("%d %d", &n, &m); 
	
	for(i=1 ; i<=m ; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a].push_back(make_pair(b,c));
		
		
	}
	
	ch[1]=1;
	DFS(1,0); 
	
	
	printf("%d\n",cost); 
	
	
	return 0; 
}
