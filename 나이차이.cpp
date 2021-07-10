#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	//freopen("input.txt", "rt",stdin);
	//텍스트로 입력받기 위해 사용 
	int n;
	int i;
	int a;
	int max=-2147000000;
	int min= 2147000000; 
	cin>> n ;
	
	for (i=1 ; i<n+1; i++){
		
		
	cin >> a;
	if (max<a) max=a;
	if (min>a) min=a;
	
}
	cout<< (max-min);
	return 0;
	}
