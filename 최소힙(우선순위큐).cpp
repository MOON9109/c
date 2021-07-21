
#include<stdio.h> 
#include <iostream>

#include <vector>

#include <queue>

#include <algorithm>

using namespace std;

 


// 최소  힙 
// 	부모가 자식보다 작게  구성 

vector<int> v1; 

int main(void)

{ int a;
  int i; 
  priority_queue<int> pQ; 
  
  while(true){
  	
  	scanf("%d", &a); 
  	if(a==-1) break; 
  	
  	if(a==0){
  		
  		if(pQ.empty()) printf("-1\n");
  		else{
  			v1.push_back(-pQ.top());
  			//printf("%d",pQ.top());
  			pQ.pop();
		  }
  		
	  }
	
	else pQ.push(-a); 
   }
   
   for(i=0 ; i<v1.size(); i++){
   	
   	printf("%d\n",v1[i]);
   }
        return 0;

}








