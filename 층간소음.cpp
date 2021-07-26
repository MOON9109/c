
//#include <bits/stdc++.h>

#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue> 
using namespace std;






//vector<int> map [40]; 
//queue<int> Q; 

 
int n, m; 

vector <int> num ; 
int main(void){ 	

int i;
int k; 
int max=-9999; 
scanf("%d %d",&n, &m); 


for (i=0 ; i< n ; i++){
	
	scanf("%d", &k);
	
	num.push_back(k); 
	
	
	
}

int count=0; 
for(i=0 ; i<n ; i++){
	
	if (num[i]>m) {
	
	
	count =count+1; 
	if (count>max) {
	max =count;} }

	else if (num[i]<m) count =0; 
}
   
   
   printf("%d", max); 
	return 0; 

}








