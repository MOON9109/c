#include<stdio.h> 
//#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int ch[10];
 // 전역변수 0으로 초기화 되어있음
  

int main() {
	 
	
	//freopen("input.txt", "rt", stdin);
	int i, digit, max=-2147000000, res;
	char a[101];
	
	scanf("%s", &a);
	
	for (i=0; a[i]!='\0';i++){
		
		digit=a[i]-48;
		ch[digit]++;
	}
	
	for(i=0 ; i<=9; i++) {
		
		if(ch[i]>= max){
			max= ch[i];
			res=i;
		}
	}
	printf("%d\n",res);
	return 0;
	}
