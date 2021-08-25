
#include <bits/stdc++.h>


using namespace std; 

struct bricks{
	
	int s, h, w;
};

int cmp (bricks a, bricks b){
	
	return a.s> b.s; 
}
int n ; 


int main(){ 
	ios_base::sync_with_stdio(false); 
	
	cin >> n ; 
	
	vector<bricks> m(n); 
	vector<int> dy(n); 
	
	for (int i =0 ; i<n ; i++){
		
		cin>>m[i].s >> m[i].h >> m[i].w; 
		
	}
	
	
	sort(m.begin(), m.end(), cmp); 
	/*
	for (int i =0 ; i<n ; i++){
		
		cout<<m[i].s <<' '<<m[i].h <<' '<< m[i].w<<'\n'; 
		
	}
	
	*/
	
	int result =-999; 
	dy[0]= m[0].h; 
	
	for (int i=1; i<n ; i++){
		
		int maxnum=0 ; 
		
		for (int j=i-1 ; j>=0 ; j--){
			if(m[j].w> m[i].w){
				
				if(maxnum<dy[j]) maxnum=dy[j]; 
			}
			
		}
		
		dy[i]= maxnum+m[i].h; 
		
		if (result<dy[i]) result =dy[i]; 
		
	}
	
	
	cout << result; 
	return 0; 
}








