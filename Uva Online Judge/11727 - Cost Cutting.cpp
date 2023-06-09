#include <bits/stdc++.h>
using namespace std;

int main(){

    int test; cin>>test;
    int i = 1;

    while (test--)
    {
        int a,b,c; cin>>a>>b>>c;
        int total = a+b+c;

        int max_num = max(a,b);
        max_num = max(max_num,c);

        int min_num = min(a,b);
        min_num = min(min_num,c);

        cout<<"Case "<<i<<": "<<total-(max_num+min_num)<<endl;;

        i++;

    }
    

	return 0;
}
