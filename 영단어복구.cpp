#include<stdio.h> 
//#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	//freopen("input.txt", "rt",stdin);

	char a[101], b[101];
	int i, p=0;
	gets(a);
	
	for(i=0; a[i]!='\0'; i++){
		if(a[i]!=' '){
			if(a[i]>=65 && a[i]<=90){
				b[p++]=a[i]+32;
				
			}
			else b[p++]=a[i];
			
		}	
		
		
	}
	b[p]='\0';
	printf("%s\n",b);
	return 0;
	}
