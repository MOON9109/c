
#include <bits/stdc++.h>
using namespace std; 


int main(){ 
	ios_base::sync_with_stdio(false);
	string str, res;
	cin>>str; 
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	unordered_map<char, int> sH, ch;
	for(char x : str) sH[x]++;
	for(char x : str){
		
		sH[x]--;
		if(ch[x]==1) continue;
		while(res.size()!=0 && res.back()>x && sH[res.back()]>0){
			
			ch[res.back()]=0;
			res.pop_back();
		}
		
		res.push_back(x);
		ch[x]=1;
	}
	cout << res; 
return 0; 

}








