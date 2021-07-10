#include<stdio.h> 
//#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	//freopen("input.txt", "rt",stdin);
	char a[100];
	int res =0, cnt =0, i;
	scanf("%s", &a);
	
	for(i=0; a[i]!='\0'; i++){
		if(a[i]>=48 && a[i]<=57){
			res=res*10+(a[i]-48);
			
		}
	}
	printf("%d\n", res);
	for(i=1; i<=res; i++){
		if(res%i==0) cnt++;
	}
		
	printf("%d\n", cnt);	
	
	
	


	return 0;
	}
