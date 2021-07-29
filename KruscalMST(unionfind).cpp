
#include <bits/stdc++.h>

//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<queue> 


using namespace std;

int unf[10001];


 


struct Edge{
	
	int v1; 
	int v2; 
	int val ; 
	
	Edge(int a, int b, int c){
		v1=a; 
		v2=b; 
		val=c;
		
	}
	
	bool operator<(Edge &b){
		
		return val<b.val; 
	}
};

//vector<int> map [40]; 
//queue<int> Q; 

//vector <vector<int< > num(n+1,vector <int> (n+1,0)); 



int find(int v){
	if(v==unf[v])  return v;
	
	else return unf[v]= find(unf[v]);
	
	
}



void Union(int a, int b){
	
	
	a= find(a);
	
	b=find(b); 
	
	if(a!=b) unf[a]=b;
	
	
	
}

int main(void){ 	
//	ios_base:: sync_with_stdio(false); 
//	
//	int n,m,a,b,c;
//	
//	cin>> n>>m ;
	ios_base::sync_with_stdio(false); 
	vector<Edge> Ed; 
	int n,m,a, b,c; 
	
	int res=0; 
	
	cin >> n >> m ;
	
	for (int i =1 ; i<=n ; i++){
		
		
		unf[i]=i; 
	}
	
 	for(int j =1; j<=m ; j++){
 		
 		cin>> a>> b >>c; 
 		Ed.push_back(Edge(a, b,c));
 		
	 }
	 
	 sort(Ed.begin(), Ed.end()); 
	 
	 
	 for(int i=0; i<m ; i++){
	 	int fa = find(Ed[i].v1); 
	 	int fb = find(Ed[i].v2); 
	 	
	 	
	 	if(fa!=fb){
	 		
	 		res+=Ed[i].val;
	 		Union(Ed[i].v1, Ed[i].v2 );
		 }
	 	
	 }
	
	
	cout<< res ;
	
	
	
	
	
	

	
	return 0; 
}








