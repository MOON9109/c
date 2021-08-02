//#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(void) {
	// cin 속도 빠르게 
	ios::sync_with_stdio(false); 
	string a="Time is 2020 Year 03 Month"; 
	
	cout << a.size() << endl ; 
	// 인덱싱 하여 출력 
	for (int i=0 ; i<a.size() ; i++){
		
		cout<< a[i]<< " "; 
	}
	cout << endl; 
	
	
	for (int i =0 ; i<a.size(); i++){
		
		if(isupper(a[i])) cout << a[i]<<" "; 
	}
	cout << endl; 
	
	for(int i=0 ; i<a.size(); i++){
		
		if(isdigit(a[i])) cout<<a[i]<<" ";
	}
	
	
	cout << endl; 
	
	cout<<a.find('T')<< endl; 
	cout << endl; 
	
	
	//문자열 추가
	
	a.push_back('s'); 
	cout << a<<endl; 
	
	// 뒤에 하나 빼기
	
	a.pop_back();
	cout <<a<<endl; 
	
	
	//더하기도 추가하는 역할
	
	a= a+'s'; 
	cout << a << endl;  
	 
	//더하기로 문자열 추가도 가능 
	
	a= a+" 27day"; 
	cout << a<< endl; 
	
	// 해당 인덱스부터 모두 출력
	
	
	cout << a.substr(8) << endl ; 
	
	
	// 0번 인덱스부터 해당 개수 출력
	
	cout <<a.substr(0,4) << endl ; 
	
	// 모두 지우기
	
	a.clear(); 
	cout << a<<endl; 
	 
	 
	 
	 
	return 0;
}
