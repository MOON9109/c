
//#include <bits/stdc++.h>

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue> 
using namespace std;


int num[11][11]; 
int ch [11]; 
int n; 
void dfs(int x){
	
	if (x==(n+1)) {
		
		for(int i=1 ; i<=n ;i++){
			if (ch[i] ==1) printf("%d ", i);
		}
		printf("\n"); 
		
	}
	else{
	
	ch[x]=1;
	dfs(x+1);
	ch[x]=0;
	dfs(x+1);
}
}


//vector<int> map [40]; 
//queue<int> Q; 


int main(void){ 	
	int i;

	
	scanf("%d",&n);
	
	dfs(1); 
	

	return 0; 
}








