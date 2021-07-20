

#include <bits/stdc++.h>
//#include <stdio.h>
//#include<iostream>
//#include <vector>
//#include <algorithm>

using namespace std;



vector<int> v1; 
int main(){
	
long long n, m;
long long i ;
long long n1; 
long long max=-99999; 
long long start=0;
long long end; 
long long mid; 
long long sum ; 
long long result;
scanf("%d %d", &n, &m);


for(i=0 ; i<n ; i++){
	
	scanf("%d",&n1); 
	if (max<n1) max=n1; 
	v1.push_back(n1);
}

end= max; 

while (start<=end){
	
	mid= (start+end)/2; 
	sum=0;
	for(i=0 ; i<n ; i++){
		if (v1[i]>mid) sum = sum+ (v1[i]-mid);
	}
	if (sum<m){
		
		end=mid-1; 
	}
	
	else{ 	result=mid; 
			start=mid+1; 
		
	}
}
	printf("%d",result);
	return 0; 
	
}







