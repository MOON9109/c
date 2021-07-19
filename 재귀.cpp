
#include <bits/stdc++.h>






using namespace std;


void recur(int x){
	if(x==0) return;
	else{
	
	
	recur(x-1); 
	printf("%d ", x); 
	}
}
 
int main(void){

	int n; 
	scanf("%d", &n );
	recur(n); 



    
    return 0;
}

