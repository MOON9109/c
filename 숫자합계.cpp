
#include<stdio.h> 
//#include <bits/stdc++.h>
//#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int answer[10]; 

int main() {
	int n;
	int i;
	int k; 
	int num1;
	int num2;
	int sum=0; 
	scanf("%d", &n);
	
	for (i=0 ;i<n; i++){
		sum=0;
		scanf("%d %d", &num1, &num2);
		
		for (k=1; k<= num1 ; k++){
			
			sum=sum+k;
			
		}
		
		if (sum==num2) answer[i]=1;
		else answer[i]=0;
	}
	
	for (i=0 ; i<n ; i++){
		if(answer[i]==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
	}
