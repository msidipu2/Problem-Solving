#include<bits/stdc++.h>
using namespace std;

int main()

{
    int firstNum, secondNUm; 
    char operatorr,equalSign, result[100];
    int count = 0;

    while(~scanf("%d%c%d%c%s", &firstNum, &operatorr, &secondNUm,&equalSign, result)){
    

    if(operatorr == '+'){
        int answer = firstNum + secondNUm;
        if(answer == atoi(result)){
            count++;
        }
    }
    else if(operatorr == '-'){
        int answer = firstNum - secondNUm;
        if(answer == atoi(result)){
            count++;
        }
    }
    }
    cout<<count<<endl;
 
    return 0;

}