
#include<stdio.h> 
//#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	
	
	int n;
	int i;
	int p;
	int k;
	int cnt=0;
	scanf("%d", &n);
	
	for (i=2 ; i<= n ; i++){
		
		p=1;
		for(k=2; k*k<=i; k++){
			if (i%k==0) {
					p=0;
					break;
		}
		}
		if (p==1) cnt++;
		
	}
	
	
	printf("%d",cnt);
	return 0;
	}
