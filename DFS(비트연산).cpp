#include <bits/stdc++.h>
using namespace std; 
int st[30001]; 
int po[16]; 
int ch[16];
int res[16];


int n, d, k ;
int a, b; 
int cnt ; 
int ma=-9999;
int bit;
int dfs (int L,int s, int bit){
	
	if (L==k+1){
	
		cnt=0;
		
		
	
		
		for(int i=1; i<=n ; i++){
			
			if((bit &st[i])==st[i]) cnt++;
			
			
		}
		if (ma<=cnt) ma=cnt;
		
		
		
		
	}
	
	else {
		
		
		for(int i=s; i<=d ; i++){
			
			if(ch[i]==0){
				
				ch[i]=1; 
				bit=bit+po[i]; 
				dfs(L+1,i+1,bit); 
				ch[i]=0; 
				bit=bit-po[i];
				
			
				
				
			}
		}
		
	}
	
}
 
int main(){ 

//ios_base::sync_with_stdio(false);
scanf("%d %d %d", &n,&d, &k); 


for(int i=1; i<=d; i++){
	
	if(i==1) po[1]=1; 
	else{
		po[i]=po[i-1]*2;
		
		
	}
}


for (int i=1; i<=n; i++){
	
	scanf("%d",&a); 
	for (int j=1; j<=a; j++){
		
		scanf("%d", &b); 
		st[i]=st[i]+po[b]; 
	}
	
}

dfs(1,1,0); 
//for (int i =1; i<=n; i++){
//	printf("%d",st[i] );
//}

printf("%d", ma); 
return 0; 

}

