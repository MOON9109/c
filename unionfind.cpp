
#include <bits/stdc++.h>

//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<queue> 


using namespace std;

int unf[1001]; 


int find(int a ){
	
	if(a==unf[a]) return a; 
	
	else return unf[a]= find(unf[a]); 
	
	
	
	
}




void Union(int a, int b){
	
	a= find(a); 
	
	b= find(b); 
	
	
	if (a!=b) unf[a]=b; 
	
	
	
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
	ios_base::sync_with_stdio(false); 
	int n,m,a, b; 
	int c, d; 
	
	cin >> n >> m ;
	
	for (int i =1 ; i<=n ; i++){
		
		
		unf[i]=i; 
	}
	
 	for(int j =1; j<=m ; j++){
 		
 		cin>> a>> b; 
 		
 		Union(a, b); 
	 }
	 
	 
	
	
	//cout<<dfs(n, r);  	
	
	
	
	cin >> c>> d; 
	
	c=find(c); 
	
	d=find(d); 
	
	if (c==d) printf("YES");
	else printf("NO"); 
	
	
	
	

	
	return 0; 
}








