
#include<bits/stdc++.h>

using namespace std; 

int main() {
	
	
	string a="It is time to Study Go Go"; 
	
	unordered_map<char,int> ch; 
	
	for(auto x : a){
		
		if(x!=' ') ch[x]++; 
		
		
	}
	
	for(auto x: ch) cout<<x.first<<" "<<x.second<<'\n'; 

    return 0;
}






