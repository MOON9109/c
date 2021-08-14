
// 바이너리 인덱스 트리 : 이진법 인덱스 구조를 활용해 구간 합 문제를 해결해 줄 수 있는
// 자료 구조 
#include <bits/stdc++.h>

using namespace std; 
// 전체 데이터의 개수는 최대 1,000,000개 
long long arr[1000001], tree[1000001];  
// 데이터의 개수 (n), 변경 횟수 (m), 구간합 계산 횟수(k)

int n, m, k ;
// i 번째 수까지 누적합을 계산하는 함수

long long prefixsum(int i){
	
	long long result =0; 
	while(i>0){
		
		result += tree[i]; 
		//0 이 아닌 마지막 비트 맡큼 빼가면서 이동
		 
		i -= (i& -i ); 
	}
	return result ; 
	
} 

 
// i 번째 수를 dif 만큼 더하는 함수  
void update (int i, long long dif){
	while(i<=n){
		
		tree[i] += dif; 
		i += (i& -i); 
		
	}
	
	
}

// start 부터 end 까지의 구간 합을 계산하는 함수  
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
		// 업데이트 연산인 경우 
		if(op ==1){
		
		
			update(a , b - arr[ a]);  // 바뀐 크기 (dif ) 만큼 적용 
			arr[ a]= b; // i번째 수를 value로 업데이트  
			
		} 
		// 구간 합 연산인 경우  
		else{
			
		
			printf("%lld\n", intervalsum(a, b)); 
			
			
		}
		
		
		
	}


	return 0; 
}








