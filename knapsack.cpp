
#include <bits/stdc++.h>

//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<queue> 


using namespace std;




//vector<int> map [40]; 
//queue<int> Q; 

//vector <vector<int< > num(n+1,vector <int> (n+1,0)); 
int main(void){ 	
//	ios_base:: sync_with_stdio(false); 
//	
//	int n,m,a,b,c;
//	
//	cin>> n>>m ;
	
	
	ios_base :: sync_with_stdio(false); 
	
	int n, m, w, v ; 
	
	cin >> n>>m ; 
	
	
	vector<int> dy(m+1,0); 
	
	
	for(int i=0 ; i<n ; i++){
		
		cin>>w >>v;
		
		for(int j=w; j<=m ; j++){
			
			
			dy[j]=max(dy[j], dy[j-w]+v);  //dy[j]= dy[j-w] +v w무게, v가치 보석 종류 별로 table 업데이트 
			 
		}
		
		
	}
	
	cout<<dy[m]; 
	
	
	
	
	
	
	

	
	return 0; 
}








