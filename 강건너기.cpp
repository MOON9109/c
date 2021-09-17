
#include <bits/stdc++.h>
using namespace std; 

int n ; 
int main(){ 

scanf("%d",&n);
vector <int> time;
int n2=0;
for(int i=1; i<=n; i++){
	
	scanf("%d", &n2);
	time.push_back(n2); 
	
	
}


sort(time.begin(), time.end());

int result=0;


int j;
for (j=n-1; j>=3; j=j-2){
	
	result=result+ min((time[j]+time[j-1]+2*time[0]),( time[1]+time[j]+time[0]+time[1]));
	
}


if(j==2) result =result+time[0]+time[1]+time[2];

if(j==1) result = result+time[1];

printf("%d", result); 
return 0; 

}








