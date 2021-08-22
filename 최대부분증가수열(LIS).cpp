
#include <bits/stdc++.h>


using namespace std; 

int n ; 

int main(){ 

int i ;
int j; 
int k; 
int num; 
int result=0; 
scanf("%d", &n);
vector <int> ar(n+1); 
vector <int> dy(n+1); 

for (i=1; i<=n; i++){
	
	scanf("%d", &num); 
	
	ar[i]=num; 
	
	
}


dy[1]=1; 

for (j =2 ; j<=n; j++){
	
	int mv=0; 
	int fl=0; 
	for (k=1; k<=j-1; k++){
		
		
		if(ar[k]<ar[j]){
			fl=1; 
			if(dy[k]+1>mv) mv=dy[k]+1; 
		}
		
	}
	if(fl==0) dy[j]=1; 
	else {dy[j]=mv;  
	}
	
	if (result<dy[j]) result= dy[j]; 
}



printf("%d", result); 

	return 0; 
}








