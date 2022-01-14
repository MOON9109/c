
#include<bits/stdc++.h>

using namespace std; 

int main() {
	
	
	string a="It is time to Study Go Go"; 
	
	map<char,int> ch; 
	
	for(auto x : a){
		
		if(x!=' ') ch[x]++; 
		
		
	}
	
	for(auto it=ch.begin(); it!=ch.end(); it++){
		
		cout<<it->first<<" "<<it->second<<endl; 
	}

    return 0;
}






