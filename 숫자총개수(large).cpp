
#include<stdio.h> 
//#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(void) {
	int n;
	int i=9;
	int cnt=1;
	int result=0;
	int m;
	int k=10;
	
	scanf("%d", &n);


	while (k<=n){
		m=i*cnt;
		
		result=result+m;
		cnt++;
		k=k*10;
		i=i*10;
		
		
		
	}
	
	result=result+(n-(k/10)+1)*cnt;
	printf("%d",result);
	
	
	
	return 0;
	}
