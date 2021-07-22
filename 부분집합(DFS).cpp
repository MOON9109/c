#include <bits/stdc++.h>

int n;
int ch[11]; 
using namespace std;
void D(int L){
	int i;
	if (L==n+1){
		
		for(i=1; i<=n; i++){
			
			if (ch[i]==1) {
			printf("%d ",i);}
		
		}
		printf("\n"); 
		
	}
	else{
		
		ch[L]=1;
		D(L+1);
		
		ch[L]=0;
		D(L+1);   
	}
}


int main(){ 	
  
    scanf("%d",&n); 
	D(1); 
	return 0;

}








