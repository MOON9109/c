
#include<bits/stdc++.h>

using namespace std; 

int main() {
	
	
	string a="It is time to Study Go Go"; 
	
	map<string,int> ch; 
	string tmp; 
	
	for(auto x : a){
		
		if(x==' ') {
		ch[tmp]++;
		tmp.clear();  
		}
		else tmp+=x;
		
	}
	
	ch[tmp]++; 
	
	for(auto x: ch) cout<<x.first<<" "<<x.second<<'\n'; 

    return 0;
}






