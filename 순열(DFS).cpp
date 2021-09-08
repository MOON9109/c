
#include <bits/stdc++.h>
using namespace std; 

int n, r; 
int ch[16];
int res[16]; 
int a[16];
int cnt; 
int dfs(int L){
	if (L==r){
		
		for(int i=0 ; i<L; i++){
			
			printf("%d ",res[i] ); 
		}
		printf("\n"); 
		cnt++; 
	}
	
	else {

		for (int i=0 ; i<n; i++){
			
			if (ch[i]==0){
				
				res[L]=a[i]; 
				ch[i]=1; 
				
			    dfs(L+1); 
			    ch[i]=0; 
			}
			
			
		}	
	}
	
}




 
int main(){ 

int num;
scanf("%d %d", &n, &r); 

 

for (int i=0 ; i< n ; i++){
	scanf("%d",&a[i]); 
 
	
}


dfs(0); 


printf("%d",cnt); 

return 0; 

}








