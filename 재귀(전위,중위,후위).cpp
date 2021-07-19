
#include <bits/stdc++.h>






using namespace std;

void D(int v){
	
	if(v>7) return ; 
	else{
		//전위 순회 (이쪽에 작성 )
		printf("%d ", v); 
		D(v*2);
		// 중위 순회 (이쪽에 작성) 
		D(v*2+1); 
		// 후위 순회 (이쪽에 작성) 
	}
}

 
int main(void){

	
	D(1); 

    
    return 0;
}

