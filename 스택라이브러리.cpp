
#include <bits/stdc++.h>

#include<stack> 
#include<vector>
using namespace std;


 
int main(void){
	int n, k; 
	
	stack<int> s; // stack
	
	
	scanf("%d %d", &n , &k);
	char num[20]="0123456789ABCDEF";
	while(n>0){
	
	
	s.push(n%k);a
	n=n/k;
	}
	
	while(!s.empty()){
		printf("%c",num[s.top()]);
		s.pop();
	}
    return 0;
}

