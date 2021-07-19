
#include <bits/stdc++.h>

int stack[100]; 
int top=-1; 


void push(int x){
	
	stack[++top]= x;
}

int pop(){
	
	return stack[top--] ; 
}



using namespace std;


 
int main(void){
	int n, k; 
	scanf("%d %d", &n , &k);
	char num[20]="0123456789ABCDEF";
	while(n>0){
	
	
	push(n%k);
	n=n/k;
	}
	
	while(top!=-1){
		printf("%c",num[pop()]);
	}
    return 0;
}

