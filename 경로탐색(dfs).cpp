
#include <bits/stdc++.h>

using namespace std; 

int n, m; 
int cnt; 

int ma [30][30]; 
int ch[30];


void dfs(int v){
	int i;
	if(v==n){
		
		cnt++; 
		
	}
	
	else{
		
		for(i=1; i<=n; i++){
			
			if(ma [v][i]==1 && ch[i]==0){
				
				ch[i]=1;
				dfs(i);
				ch[i]=0;
				
			}
		}
		
		
	}
	
}

int main(void){ 
int a, b;
int i ; 
scanf("%d %d", &n, &m); 

for(i=1; i<=m; i++){
	scanf("%d %d", &a, &b); 
	ma[a][b]=1;
	
}

ch[1]=1;

dfs(1); 


printf("%d", cnt); 

	return 0; 
}








