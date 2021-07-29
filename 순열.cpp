
#include <bits/stdc++.h>

//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<queue> 


using namespace std;

int dy[21][21]; 


int dfs(int n, int r){
	
	
	if (dy[n][r]>0)  return dy[n][r];
	
	if(n==r || r==0)  return 1; 
	
	else return dy[n][r]= dfs(n-1, r-1)+ dfs(n-1, r); 
	
	
}

//vector<int> map [40]; 
//queue<int> Q; 

//vector <vector<int< > num(n+1,vector <int> (n+1,0)); 


int main(void){ 	
//	ios_base:: sync_with_stdio(false); 
//	
//	int n,m,a,b,c;
//	
//	cin>> n>>m ;
	
	int n, r ; 
	ios_base::sync_with_stdio(false); 
	
	cin >> n >> r;
	
 
	
	
	cout<<dfs(n, r);  	
	
	
	
	
	
	
	
	

	
	return 0; 
}








