#include <bits/stdc++.h>
int n, m; 
int cnt=0; 
using namespace std; 
vector <int> v1; 

void dfs (int L , int total){
	
	if (L==n){
		
		if(total ==m ) cnt ++; 
		
	}
	else{
	
	dfs(L+1, total+ v1[L]); 
	dfs(L+1, total- v1[L]); 
	dfs(L+1, total);
}
}

int main(void){ 
int i ;
int num ; 
scanf("%d %d", &n, &m); 

for(i=1 ; i<=n; i++){
	
	scanf("%d", &num); 
	v1.push_back(num); 
	
	
}


	dfs(0,0); 
	
	printf("%d",cnt); 

	return 0; 
}








