
#include <bits/stdc++.h>

//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<queue> 
using namespace std;



//vector<int> map [40]; 
//queue<int> Q; 
int dy[50]; 
//vector <vector<int< > num(n+1,vector <int> (n+1,0)); 
int main(void){ 	
//	ios_base:: sync_with_stdio(false); 
//	
//	int n,m,a,b,c;
//	
//	cin>> n>>m ;

	ios_base::sync_with_stdio(false) ; 
	
	
	
	int n; 
	cin >> n; 
	
	dy[1]=1; 
	dy[2]=2 ; 
	
	for(int i=3 ; i<=n; i++){
		
		dy[i]= dy[i-2]+dy[i-1];
		
		
	}
	
	cout <<dy[n]; 
	return 0; 
}








