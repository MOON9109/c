
// ���̳ʸ� �ε��� Ʈ�� : ������ �ε��� ������ Ȱ���� ���� �� ������ �ذ��� �� �� �ִ�
// �ڷ� ���� 
#include <bits/stdc++.h>

using namespace std; 
// ��ü �������� ������ �ִ� 1,000,000�� 
long long arr[1000001], tree[1000001];  
// �������� ���� (n), ���� Ƚ�� (m), ������ ��� Ƚ��(k)

int n, m, k ;
// i ��° ������ �������� ����ϴ� �Լ�

long long prefixsum(int i){
	
	long long result =0; 
	while(i>0){
		
		result += tree[i]; 
		//0 �� �ƴ� ������ ��Ʈ ��ŭ �����鼭 �̵�
		 
		i -= (i& -i ); 
	}
	return result ; 
	
} 

 
// i ��° ���� dif ��ŭ ���ϴ� �Լ�  
void update (int i, long long dif){
	while(i<=n){
		
		tree[i] += dif; 
		i += (i& -i); 
		
	}
	
	
}

// start ���� end ������ ���� ���� ����ϴ� �Լ�  
long long intervalsum (int start, int end){
	
	
	return prefixsum(end) - prefixsum(start -1); 
}


int main(void){ 

	scanf(" %d %d %d", &n, &m, &k ); 
	for (int i=1 ; i<=n; i++){
		long long x; 
		scanf("%lld", &x); 
		arr[i] =x ; 
		update(i,x); 
		
		
	}
	
	int count =0 ;
	while (count++ < m+k ){
		int op; 
		int a; 
		long long b; 
		
		scanf("%d %d %lld", &op ,&a, &b); 
		// ������Ʈ ������ ��� 
		if(op ==1){
		
		
			update(a , b - arr[ a]);  // �ٲ� ũ�� (dif ) ��ŭ ���� 
			arr[ a]= b; // i��° ���� value�� ������Ʈ  
			
		} 
		// ���� �� ������ ���  
		else{
			
		
			printf("%lld\n", intervalsum(a, b)); 
			
			
		}
		
		
		
	}


	return 0; 
}








