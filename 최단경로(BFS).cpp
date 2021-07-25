
//#include <bits/stdc++.h>

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue> 
using namespace std;

//BFS (·¹º§ Å½»ö) 



int n, m; 
int dis[40]; 
int ch[40]; 

vector<int> map [40]; 
queue<int> Q; 
int main(void){ 	
 
 
 int i;
 int a; 
 int b; 
 int k ; 
 int x; 
 scanf("%d %d", &n, &m); 
 
 for(i=0; i<m ; i++){
 	
 	scanf("%d %d", &a, &b); 
 	map[a].push_back(b); 
 	
 }
 
 ch[1]=1; 
 
 Q.push(1); 
 
 while(!Q.empty()){
 	
 	x=Q.front();
 	Q.pop(); 
 	
 	
 	for (k=0; k<map[x].size(); k++){
 		
 		if(ch[map[x][k]]==0){
 			
 			Q.push(map[x][k]); 
 			ch[map[x][k]]=1; 
 			
 			dis[map[x][k]]=dis[x]+1; 
 			
		 }
 		
	 }
 	
 	
 	
 	
 }
 
 
 for(i=2; i<=n; i++){
 	
 	printf("%d : %d\n", i, dis[i]); 
 	
 }
 
   
	return 0; 

}








