//#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(void) {
	// cin �ӵ� ������ 
	ios::sync_with_stdio(false); 
	string a="Time is 2020 Year 03 Month"; 
	
	cout << a.size() << endl ; 
	// �ε��� �Ͽ� ��� 
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
	
	
	//���ڿ� �߰�
	
	a.push_back('s'); 
	cout << a<<endl; 
	
	// �ڿ� �ϳ� ����
	
	a.pop_back();
	cout <<a<<endl; 
	
	
	//���ϱ⵵ �߰��ϴ� ����
	
	a= a+'s'; 
	cout << a << endl;  
	 
	//���ϱ�� ���ڿ� �߰��� ���� 
	
	a= a+" 27day"; 
	cout << a<< endl; 
	
	// �ش� �ε������� ��� ���
	
	
	cout << a.substr(8) << endl ; 
	
	
	// 0�� �ε������� �ش� ���� ���
	
	cout <<a.substr(0,4) << endl ; 
	
	// ��� �����
	
	a.clear(); 
	cout << a<<endl; 
	 
	 
	 
	 
	return 0;
}
