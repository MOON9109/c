#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int n, m;
	int sum =0;
	int i;
	cin>> n >> m ;
	
	for (i=n ; i<m+1; i++){
		
		sum =sum +i;
		if(i<m){
		
		cout<<i<<"+";
	}
	else 
		cout<<i<<"=";
	
		} 
		
	cout<< sum ;
	return 0;
}
