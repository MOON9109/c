
//#include <bits/stdc++.h>

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue> 
using namespace std;
int result; 
int n ;
bool flag =false; 
int ch[11]; 
vector <int> na ; 
int sum=0;

void dfs(int x, int result){
	int i;
	if (x==(n+1)){
		if (result*2==sum) {
			
			flag =true; 
		    
		    printf("YES"); 
		    exit(0);
		}
				
	}
	
	else{
	
	
	
	dfs(x+1, result+na[x-1]); 
	

	dfs(x+1, result);
	
}
	
}

//vector<int> map [40]; 
//queue<int> Q; 


int main(void){ 	
int i ;
int num ;  



scanf("%d", &n); 

for(i=0 ; i<n ; i++){
	
	scanf("%d",&num); 
	
	sum = sum +num ; 
	na.push_back(num) ; 
	
}


	
	

	dfs(1,0);
if (flag==false) printf("NO" ); 
	




	return 0; 
}








