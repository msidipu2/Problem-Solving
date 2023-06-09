#include <bits/stdc++.h>
using namespace std;

int main(){

	int test; cin>>test;
	int i = 1;

	while (test--)
	{
		int N,K,P; cin>>N>>K>>P;
		int person = (K + P) % N;
		if(person != 0){
			cout<<"Case "<<i<<": "<<person<<endl;
			
		}
		else{
			cout<<"Case "<<i<<": "<<N<<endl;
		}
		i++;
		
	}
	



	return 0;
}
