
#include <bits/stdc++.h>






using namespace std;

void D(int v){
	
	if(v>7) return ; 
	else{
		//���� ��ȸ (���ʿ� �ۼ� )
		printf("%d ", v); 
		D(v*2);
		// ���� ��ȸ (���ʿ� �ۼ�) 
		D(v*2+1); 
		// ���� ��ȸ (���ʿ� �ۼ�) 
	}
}

 
int main(void){

	
	D(1); 

    
    return 0;
}

