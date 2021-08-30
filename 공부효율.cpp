
#include <bits/stdc++.h>


using namespace std; 

struct study{
	
	int s, e, r; 
};

int cmp(study a, study b){
	
	
	return a.e< b.e;
}



int N ,M, R;
int main(){ 
int num1,num2,num3;

scanf("%d %d %d", &N, &M, &R); 
vector <study> dy(M); 

for (int i =0; i<M; i++){
	scanf("%d %d %d", &num1, &num2, &num3);
	dy[i].s=num1;
	dy[i].e=num2;
	dy[i].r=num3;
}


sort(dy.begin(), dy.end(), cmp);
vector <int> dy2(M); 

dy2[0]=dy[0].r; 

int result=dy[0].r;
for (int i =1; i<M; i++){
	
	dy2[i]=dy[i].r;
	 
	for (int j=i-1; j>=0; j--){
		
		if (dy[i].s>= dy[j].e+R){
			
			if(dy2[j]+dy[i].r>dy2[i])
			dy2[i]=dy2[j]+dy[i].r;
			
		}
	}
	if(result<dy2[i])
	result=dy2[i];
}
	



printf("%d", result);



 
 
return 0; 

}








