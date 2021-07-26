
//#include <bits/stdc++.h>

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue> 
using namespace std;






//vector<int> map [40]; 
//queue<int> Q; 

 int ch [10001]; 
int S, E; 
int d[3] ={-1,1,5}; 

queue<int> Q;  
int main(void){ 	
	int cnt=0; 
	int x; 
	int T; 
	int i; 
	int result; 
	int k ; 
	int num ; 

	scanf("%d %d", &S, &E);
	
	
	T=S; 
	x=S; 
	Q.push(S); 
	ch[x]=1 ; 

	while(!Q.empty()){
		
	 

		
	x=Q.front(); 
	
	Q.pop(); 
//	if (ch[x-1] ==0) Q.push(x-1); 
//	if (ch[x+1]==0) Q.push(x+1); 
//	if(ch[x+5]==0)	Q.push(x+5); 
		
	for( i=0 ; i<3 ; i++){
		num = x +d[i ]; 
		
		if (num ==E) {
		printf("%d",ch[x]); 
		
		return 0 ; 
		
	}
		if( ch[num]==0){
			
			ch[num ]= ch[x]+1 ; 
			Q.push(num); 
		}
		
		
	}
	
	}

	

	
	
	return 0; 
}








