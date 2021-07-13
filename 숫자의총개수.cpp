
#include<stdio.h> 
//#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(void) {
	int n, i, cnt=0, tmp;
	scanf("%d",&n);	
	
	for (i=1; i<=n; i++){
		tmp =i;
		while(tmp>0){
			
			tmp=tmp/10;
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
	}
