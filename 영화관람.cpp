#include <bits/stdc++.h>


using namespace std; 

int n; 



int main(){ 
int num ; 
scanf("%d", &n);
  
vector<int> h(n+1);
vector<int> res(n+1); 
for (int i=1; i<=n; i++){
	
	scanf("%d", &num);
	
	h[i]= num; 
}



stack<int> s; 

for (int i=n; i>=1 ; i--){
	
	while (!s.empty() && h[i]>h[s.top()]){
		
		res[s.top()]=i; 
		s.pop(); 
		
	}
	s.push(i); 
}

for(int i=1 ; i<=n; i++){
	
	printf("%d ",res[i]);
}

return 0; 

}
