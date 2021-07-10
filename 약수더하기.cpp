#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int n;
	int sum =0;
	int i;
	cin>> n ;
	
	for (i=1 ; i<n; i++){
		
		
		if(i==1){
			sum=sum+i;
			cout <<i;
		}	
		else if ((n%i)==0){
			
			sum=sum+i;
			cout <<" + " <<i;
		}
		
	
}
	cout<<" = "<< sum ;
	return 0;
	}
