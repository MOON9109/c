#include <iostream>
#include<stdio.h> 
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	//freopen("input.txt", "rt",stdin);
	
	char a[20];
	int year, age;
	scanf ("%s", &a);
	
	// �ƽ�Ű �ڵ忡�� ���ڷ� ����ϱ� ���� 48 ���� 
	if(a[7]=='1' || a[7]=='2') year =1900 +((a[0]-48)*10 + (a[1]-48));
	else year =2000+((a[0]-48)*10 +(a[1]-48));
	
	age=2019-year +1;
	printf("%d ",age);
	if(a[7]=='1' || a[7]=='3') printf("M\n");
	else printf("W\n");
	


	return 0;
	}
