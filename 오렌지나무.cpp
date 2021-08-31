
#include <bits/stdc++.h>


using namespace std; 

int w,h,t,s;
vector <int> x; 
vector <int> y;
int main(){ 
scanf("%d %d %d %d",&w, &h, &t, &s); 

int num1, num2; 
for (int i=0 ; i<t; i++){
	scanf("%d %d", &num1, &num2); 
	x.push_back(num1); 
	y.push_back(num2); 
	
	
}

int cnt; 
int result; 
for (int i=0; i<t; i++){
	
	for (int j=0 ; j<t ; j++){
		cnt=0; 
		for(int k=0 ; k<t; k++){
			
			if (x[i]<=x[k] && x[i]+s>=x[k]  ){
				if(y[j]<=y[k] && y[j]+s>=y[k]){
					cnt++; 
				}
			}
		
		}
		
		if(result<cnt) result=cnt; 
		
	}
}


printf("%d", result); 
return 0; 

}








