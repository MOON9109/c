
//#include<stdio.h> 
#include <bits/stdc++.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



char a[65];
char b[65];

int n1[65]; 
int n2[65];  
int main() {
	int i;
	int j;
	int num1; 
	int num2;
	bool T=1; 
	
	scanf("%s",a);
	scanf("%s",b);
	
	for (i=0; a[i]!='\0'; i++){
		
		num1=a[i]-65; 
		n1[num1]=n1[num1]+1;
	}
	
	for (j=0 ;b[j]!='\0'; j++ ){
		
		num2=b[j]-65; 
		n2[num2]=n2[num2]+1;
	}
	for (i=0; i<65; i++){
		
		if (n1[i]!=n2[i]) T=0;
	}
	
	if (T==1) printf("YES");
	else printf("NO");
	return 0;
	}
