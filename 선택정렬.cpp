
#include<stdio.h> 
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 선택 정렬
// 처리되지 않은 데이터 중에서 가장 작은 데이터를 선택해
// 맨앞에 있는 데이터와 바꿔줌 

int n=10;
int target[10]={7,5,9,0,3,1,6,2,4,8};
 

int main(void) {
	
	for (int i=0; i<n; i++){
		int min_index =i ;
		
		for (int j=i+1; j<n; j++){
			if (target[min_index]> target[j]){
				min_index=j;
			}
		}
		
		swap(target[i], target[min_index]);
	}
	 
	for (int i=0; i< n; i++){
		
		printf("%d ", target[i]);
	}
	return 0;
	}
