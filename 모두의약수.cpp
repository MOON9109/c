
#include<stdio.h> 
//#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cnt[50001];

int main(void) {
	
	//freopen("input.txt", "rt",stdin);
	int n, i ,j;
	
	
	scanf("%d", &n);
	for (i=1; i<=n ; i++){
		
		for(j=i; j<=n; j=j+i){
			cnt[j]++;
			
			
		}
		
	}
	
	for(i=1; i<=n ; i++){
		
		printf("%d ",cnt[i]);
	}
	

	return 0;
	}
